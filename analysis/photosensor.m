clc;    % Clear the command window.
close all;  % Close all figures (except those of imtool.)
clear;  % Erase all existing variables. Or clearvars if you want.
workspace;  % Make sure the workspace panel is showing.
format long g;
format compact;
fontSize = 20;

% Load the data from the files
x = load('sensor.txt');
y = load('lux.txt');

% Plot the data as a scatter plot
scatter(x, y);
xlabel('Sensor Value');
ylabel('LUX Meter Value');
title('LUX (Sensor Value) Function');

% Define the type of exponential model you want to fit
ft = fittype('a*exp(-b*x) + c', 'coefficients', {'a', 'b', 'c'});

% Provide initial guesses for the parameters
initialGuess = [max(y), 0.01, min(y)];

% Fit the model to your data
f = fit(x, y, ft, 'StartPoint', initialGuess);

% Display the coefficients
fprintf('The coefficients are a = %.2f, b = %.4f, and c = %.2f.\n', f.a, f.b, f.c);
f

% Plot the model
hold on;
plot(f);
hold off;