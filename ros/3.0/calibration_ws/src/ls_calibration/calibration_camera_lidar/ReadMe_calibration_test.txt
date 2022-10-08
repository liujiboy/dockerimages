calibration_of_camera_and_lrf


���p���������
ReadMe.png�Q��
1:�`�F�b�J�[�{�[�h�ʂ̐�����z���Ɠ�����
	x, y����]�̌Œ�
2:�`�F�b�J�[�{�[�h���S�̈ʒu���ϑ�
	z����]�̌Œ�
	x, y���̕��i�x�N�g�����Œ�

���p���@
1:calibration_of_camera_and_lrf/param.yaml�t�@�C���ɍ��ڂ����
	1.1:camera_calibration���ŗ\�߃J�����̓����p�����[�^�����߂Ă����K�v������܂��B
	�Q�lURL:http://ros-robot.blogspot.jp/2010/11/cameracalibrationusb.html
---param.yaml-start--------------------------------------------------------------------------------------
	checkerboard:
		pat_row:7   #�`�F�b�J�[�{�[�h�̏c���C���̃}�X(���}�X4��+���}�X4�ł����7)
		pat_col:11  #�`�F�b�J�[�{�[�h�̏c���C���̃}�X(���}�X6��+���}�X6�ł����11)
		chess_size:20.0 #�}�X�̃T�C�Y(mm)    
		paper_width_margin:66.0 #�`�F�b�J�[�{�[�h�O�̎��̗]��(mm)�B�K���Ȓl�ō\���܂���
	window_lrf:
		width:1240   #LRF�E�B���h�E�T�C�Y�i�ύX�̕K�v�Ȃ��j
		height:960   #LRF�E�B���h�E�T�C�Y�i�ύX�̕K�v�Ȃ��j
		line_division_num:10   #LRF�̏c���C���̐��i�ύX�̕K�v�Ȃ��j
		judge_margin:30.0   #�`�F�b�J�[�{�[�h��LRF��Z�����@����ɂ��邩�ǂ����̔��f�}�[�W���imm�j�B�i�ύX�̕K�v�Ȃ��j    
	intrinsic_matrix: !!opencv-matrix
	    rows: 3
	    cols: 3
	    dt: f
	    data: [583.199804, 0.000000, 343.605359, 0.000000, 583.989335, 241.745468, 0.000000, 0.000000, 1.000000]   #camera_calibration�ɂċ��߂��s��
	distrotion_matrix: !!opencv-matrix
		rows: 1
		cols: 4
		dt: f
		data: [0.014429, -0.032025, 0.003003, -0.001721]  #camera_calibration�ɂċ��߂��s��
---param.yaml-end--------------------------------------------------------------------------------------
2:urg_node�Auvc_camera�Acalibration_of_camera_and_lrf�����s
	2.1:LRF�E�B���h�E�A�J�����摜�E�B���h�E���\�������
3:�J�����ALRF�Ń`�F�b�J�[�{�[�h��F�����ACALIBRATE(CLICK)���N���b�N����
	3.1:LRF�ɂĔF��������LRF�E�B���h�E��LRF OK�ƕ\������܂��B
		3.1.1:LRF OK�ƕ\������邽�߂ɂ�LRF�E�B���h�E��2�{�̉��F���c���C���̒��ɂ���ϑ������_�Q�f�[�^���S���ԐF�ɂȂ�K�v������܂��B
		3.1.2:�S�ĐԐF�ɂȂ�ɂ�LRF��Z����̓_�i���F�̓_�j����O��judge_margin:30.0mm�ł���K�v������܂�
	3.2:�J�����ɂĔF��������LRF�E�B���h�E��CAMERA OK�ƕ\������܂��B
4:�J�����摜�E�B���h�E�ɂăZ���T�t���[�W�������s���܂��B
5:�J�����摜�E�B���h�E�㕔�̂U�̃g���b�N�o�[�ɂăp�����[�^�𒲐߂��Ă��������i�e���W�n.png�Q�ƁiX��:���AY��:�c�AZ���s�j�j
	5.1:X,Y,Z�x�N�g����O��1000�i1000mm�j��������悤�ɂȂ��Ă��܂��B�i�g���b�N�o�[�l0=-1000�j
	5.2:X,Y,Z�̉�]�p�x��360�x��������悤�ɂȂ��Ă��܂��B
6:�K�؂ɒ��߂ł��܂�����ASAVE(CLICK)���N���b�N���Ă�������
7:���݂̃f�B���N�g����camera.yaml����������܂��B



