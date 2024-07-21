clear

%パラメータ
dt = 0.01;

init_P = [1, 0; 0, 0.01];
pre_P = init_P;

init_theta = 0.1;
pre_theta = init_theta;

for i = 1:10
    [theta, P] = kalmanFilter(dt, 0.001, pre_P, pre_theta, 0.1, 0.1, 0.1, 0.0);

    pre_P = P;
    pre_theta = theta;
end
