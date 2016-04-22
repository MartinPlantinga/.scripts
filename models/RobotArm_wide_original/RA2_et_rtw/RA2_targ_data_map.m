  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (RA2_P)
    ;%
      section.nData     = 145;
      section.data(145)  = dumData; %prealloc
      
	  ;% RA2_P.DiscreteDerivative_ICPrevScaled
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% RA2_P.DiscreteDerivative_ICPrevScal_k
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% RA2_P.DiscreteDerivative_ICPrevScal_h
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% RA2_P.CompareToConstant_const
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% RA2_P.Solenoid_Y0
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% RA2_P.ReferenceR_Value
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% RA2_P.Gain_Gain
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% RA2_P.ReferenceX_Value
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% RA2_P.Gain_Gain_e
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% RA2_P.ReferenceZ_Value
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% RA2_P.Gain_Gain_l
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% RA2_P.FeedforwardR_Value
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% RA2_P.FeedforwardX_Value
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% RA2_P.FeedforwardZ_Value
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% RA2_P.ReferenceSolenoid_Value
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% RA2_P.SFunction_P1_Size
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% RA2_P.SFunction_P1
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 17;
	
	  ;% RA2_P.Constant4_Value
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 18;
	
	  ;% RA2_P.Constant3_Value
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 19;
	
	  ;% RA2_P.HomingRunningSwitch_Threshold
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 20;
	
	  ;% RA2_P.HomingRunningSwitch_Threshold_l
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 21;
	
	  ;% RA2_P.HomingRunningSwitch_Threshold_i
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 22;
	
	  ;% RA2_P.ec_Ebox_P1_Size
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 23;
	
	  ;% RA2_P.ec_Ebox_P1
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 25;
	
	  ;% RA2_P.DiscreteTimeIntegrator_gainval
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 26;
	
	  ;% RA2_P.DiscreteTimeIntegrator_IC
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 27;
	
	  ;% RA2_P.Constant1_Value
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 28;
	
	  ;% RA2_P.DiscreteTimeIntegrator_gainva_e
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 29;
	
	  ;% RA2_P.Gain_Gain_n
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 30;
	
	  ;% RA2_P.Constant_Value
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 31;
	
	  ;% RA2_P.UnitDelay_InitialCondition
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 32;
	
	  ;% RA2_P.DiscreteTimeIntegrator_gainva_n
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 33;
	
	  ;% RA2_P.DiscreteTimeIntegrator_IC_k
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 34;
	
	  ;% RA2_P.Constant1_Value_g
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 35;
	
	  ;% RA2_P.DiscreteTimeIntegrator_gainva_d
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 36;
	
	  ;% RA2_P.Gain1_Gain
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 37;
	
	  ;% RA2_P.Constant_Value_c
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 38;
	
	  ;% RA2_P.DiscreteTimeIntegrator_gainva_j
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 39;
	
	  ;% RA2_P.DiscreteTimeIntegrator_IC_p
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 40;
	
	  ;% RA2_P.Constant1_Value_i
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 41;
	
	  ;% RA2_P.DiscreteTimeIntegrator_gainva_k
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 42;
	
	  ;% RA2_P.ec_Ebox_P1_Size_b
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 43;
	
	  ;% RA2_P.ec_Ebox_P1_p
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 45;
	
	  ;% RA2_P.Gain2_Gain
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 46;
	
	  ;% RA2_P.Constant_Value_f
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 47;
	
	  ;% RA2_P.Constant_Value_p
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 48;
	
	  ;% RA2_P.Constant_Value_k
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 49;
	
	  ;% RA2_P.Constant1_Value_b
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 50;
	
	  ;% RA2_P.Constant2_Value
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 51;
	
	  ;% RA2_P.PulseGenerator_Amp
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 52;
	
	  ;% RA2_P.PulseGenerator_Period
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 53;
	
	  ;% RA2_P.PulseGenerator_Duty
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 54;
	
	  ;% RA2_P.PulseGenerator_PhaseDelay
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 55;
	
	  ;% RA2_P.Dctintegrator_P1_Size
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 56;
	
	  ;% RA2_P.Dctintegrator_P1
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 58;
	
	  ;% RA2_P.Gain1_Gain_j
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 60;
	
	  ;% RA2_P.Dctpd_P1_Size
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 61;
	
	  ;% RA2_P.Dctpd_P1
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 63;
	
	  ;% RA2_P.Dctnotch_P1_Size
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 66;
	
	  ;% RA2_P.Dctnotch_P1
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 68;
	
	  ;% RA2_P.Dct2lowpass_P1_Size
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 73;
	
	  ;% RA2_P.Dct2lowpass_P1
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 75;
	
	  ;% RA2_P.Saturation_UpperSat
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 78;
	
	  ;% RA2_P.Saturation_LowerSat
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 79;
	
	  ;% RA2_P.Gain1_Gain_o
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 80;
	
	  ;% RA2_P.Dctpd_P1_Size_c
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 81;
	
	  ;% RA2_P.Dctpd_P1_h
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 83;
	
	  ;% RA2_P.Dctnotch_P1_Size_p
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 86;
	
	  ;% RA2_P.Dctnotch_P1_k
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 88;
	
	  ;% RA2_P.Dct2lowpass_P1_Size_n
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 93;
	
	  ;% RA2_P.Dct2lowpass_P1_j
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 95;
	
	  ;% RA2_P.Saturation_UpperSat_p
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 98;
	
	  ;% RA2_P.Saturation_LowerSat_d
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 99;
	
	  ;% RA2_P.Dctintegrator_P1_Size_i
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 100;
	
	  ;% RA2_P.Dctintegrator_P1_i
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 102;
	
	  ;% RA2_P.Gain1_Gain_p
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 104;
	
	  ;% RA2_P.Dctpd_P1_Size_i
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 105;
	
	  ;% RA2_P.Dctpd_P1_k
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 107;
	
	  ;% RA2_P.Dctnotch_P1_Size_h
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 110;
	
	  ;% RA2_P.Dctnotch_P1_b
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 112;
	
	  ;% RA2_P.Dct2lowpass_P1_Size_d
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 117;
	
	  ;% RA2_P.Dct2lowpass_P1_h
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 119;
	
	  ;% RA2_P.Gain1_Gain_a
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 122;
	
	  ;% RA2_P.Dctpd_P1_Size_n
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 123;
	
	  ;% RA2_P.Dctpd_P1_hn
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 125;
	
	  ;% RA2_P.Dctnotch_P1_Size_d
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 128;
	
	  ;% RA2_P.Dctnotch_P1_bw
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 130;
	
	  ;% RA2_P.Dct2lowpass_P1_Size_e
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 135;
	
	  ;% RA2_P.Dct2lowpass_P1_g
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 137;
	
	  ;% RA2_P.Saturation2_UpperSat
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 140;
	
	  ;% RA2_P.Saturation2_LowerSat
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 141;
	
	  ;% RA2_P.Saturation3_UpperSat
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 142;
	
	  ;% RA2_P.Saturation3_LowerSat
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 143;
	
	  ;% RA2_P.Dctintegrator_P1_Size_o
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 144;
	
	  ;% RA2_P.Dctintegrator_P1_p
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 146;
	
	  ;% RA2_P.Gain1_Gain_os
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 148;
	
	  ;% RA2_P.Dctpd_P1_Size_b
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 149;
	
	  ;% RA2_P.Dctpd_P1_i
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 151;
	
	  ;% RA2_P.Dctnotch_P1_Size_p5
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 154;
	
	  ;% RA2_P.Dctnotch_P1_j
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 156;
	
	  ;% RA2_P.Dct2lowpass_P1_Size_a
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 161;
	
	  ;% RA2_P.Dct2lowpass_P1_n
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 163;
	
	  ;% RA2_P.Gain1_Gain_h
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 166;
	
	  ;% RA2_P.Dctpd_P1_Size_l
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 167;
	
	  ;% RA2_P.Dctpd_P1_d
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 169;
	
	  ;% RA2_P.Dctnotch_P1_Size_i
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 172;
	
	  ;% RA2_P.Dctnotch_P1_a
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 174;
	
	  ;% RA2_P.Dct2lowpass_P1_Size_h
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 179;
	
	  ;% RA2_P.Dct2lowpass_P1_a
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 181;
	
	  ;% RA2_P.SaturationX_UpperSat
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 184;
	
	  ;% RA2_P.SaturationX_LowerSat
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 185;
	
	  ;% RA2_P.Switch_Threshold
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 186;
	
	  ;% RA2_P.ResetEncoderR_P1_Size
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 187;
	
	  ;% RA2_P.ResetEncoderR_P1
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 189;
	
	  ;% RA2_P.ResetEncoderR_P2_Size
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 190;
	
	  ;% RA2_P.ResetEncoderR_P2
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 192;
	
	  ;% RA2_P.LimitSpeed_RisingLim
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 193;
	
	  ;% RA2_P.LimitSpeed_FallingLim
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 194;
	
	  ;% RA2_P.LimitSpeed_IC
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 195;
	
	  ;% RA2_P.TSamp_WtEt
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 196;
	
	  ;% RA2_P.LimitAcceleration_RisingLim
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 197;
	
	  ;% RA2_P.LimitAcceleration_FallingLim
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 198;
	
	  ;% RA2_P.LimitAcceleration_IC
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 199;
	
	  ;% RA2_P.ResetEncoderX_P1_Size
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 200;
	
	  ;% RA2_P.ResetEncoderX_P1
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 202;
	
	  ;% RA2_P.ResetEncoderX_P2_Size
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 203;
	
	  ;% RA2_P.ResetEncoderX_P2
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 205;
	
	  ;% RA2_P.LimitSpeed_RisingLim_b
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 206;
	
	  ;% RA2_P.LimitSpeed_FallingLim_e
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 207;
	
	  ;% RA2_P.LimitSpeed_IC_i
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 208;
	
	  ;% RA2_P.TSamp_WtEt_g
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 209;
	
	  ;% RA2_P.LimitAcceleration_RisingLim_g
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 210;
	
	  ;% RA2_P.LimitAcceleration_FallingLim_o
	  section.data(133).logicalSrcIdx = 132;
	  section.data(133).dtTransOffset = 211;
	
	  ;% RA2_P.LimitAcceleration_IC_k
	  section.data(134).logicalSrcIdx = 133;
	  section.data(134).dtTransOffset = 212;
	
	  ;% RA2_P.ResetEncoderZ_P1_Size
	  section.data(135).logicalSrcIdx = 134;
	  section.data(135).dtTransOffset = 213;
	
	  ;% RA2_P.ResetEncoderZ_P1
	  section.data(136).logicalSrcIdx = 135;
	  section.data(136).dtTransOffset = 215;
	
	  ;% RA2_P.ResetEncoderZ_P2_Size
	  section.data(137).logicalSrcIdx = 136;
	  section.data(137).dtTransOffset = 216;
	
	  ;% RA2_P.ResetEncoderZ_P2
	  section.data(138).logicalSrcIdx = 137;
	  section.data(138).dtTransOffset = 218;
	
	  ;% RA2_P.LimitSpeed_RisingLim_h
	  section.data(139).logicalSrcIdx = 138;
	  section.data(139).dtTransOffset = 219;
	
	  ;% RA2_P.LimitSpeed_FallingLim_h
	  section.data(140).logicalSrcIdx = 139;
	  section.data(140).dtTransOffset = 220;
	
	  ;% RA2_P.LimitSpeed_IC_f
	  section.data(141).logicalSrcIdx = 140;
	  section.data(141).dtTransOffset = 221;
	
	  ;% RA2_P.TSamp_WtEt_d
	  section.data(142).logicalSrcIdx = 141;
	  section.data(142).dtTransOffset = 222;
	
	  ;% RA2_P.LimitAcceleration_RisingLim_a
	  section.data(143).logicalSrcIdx = 142;
	  section.data(143).dtTransOffset = 223;
	
	  ;% RA2_P.LimitAcceleration_FallingLim_m
	  section.data(144).logicalSrcIdx = 143;
	  section.data(144).dtTransOffset = 224;
	
	  ;% RA2_P.LimitAcceleration_IC_n
	  section.data(145).logicalSrcIdx = 144;
	  section.data(145).dtTransOffset = 225;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (RA2_B)
    ;%
      section.nData     = 98;
      section.data(98)  = dumData; %prealloc
      
	  ;% RA2_B.ec_Ebox_o1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% RA2_B.ec_Ebox_o2
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% RA2_B.ec_Ebox_o3
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% RA2_B.Constant1
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 12;
	
	  ;% RA2_B.Sum
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 13;
	
	  ;% RA2_B.Gain
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 14;
	
	  ;% RA2_B.Sum2
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 15;
	
	  ;% RA2_B.Constant1_l
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 16;
	
	  ;% RA2_B.Sum_g
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 17;
	
	  ;% RA2_B.Gain1
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 18;
	
	  ;% RA2_B.Sum2_a
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 19;
	
	  ;% RA2_B.Constant1_p
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 20;
	
	  ;% RA2_B.Sum_i
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 21;
	
	  ;% RA2_B.ec_Ebox_o1_h
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 22;
	
	  ;% RA2_B.ec_Ebox_o2_f
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 24;
	
	  ;% RA2_B.ec_Ebox_o3_h
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 26;
	
	  ;% RA2_B.Gain2
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 34;
	
	  ;% RA2_B.Sum2_f
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 35;
	
	  ;% RA2_B.Add1
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 36;
	
	  ;% RA2_B.PulseGenerator
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 37;
	
	  ;% RA2_B.Dctintegrator
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 38;
	
	  ;% RA2_B.Gain1_h
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 39;
	
	  ;% RA2_B.Dctpd
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 40;
	
	  ;% RA2_B.Dctnotch
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 41;
	
	  ;% RA2_B.Dct2lowpass
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 42;
	
	  ;% RA2_B.Saturation
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 43;
	
	  ;% RA2_B.Gain1_p
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 44;
	
	  ;% RA2_B.Dctpd_o
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 45;
	
	  ;% RA2_B.Dctnotch_k
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 46;
	
	  ;% RA2_B.Dct2lowpass_p
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 47;
	
	  ;% RA2_B.Saturation_g
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 48;
	
	  ;% RA2_B.Dctintegrator_b
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 49;
	
	  ;% RA2_B.Gain1_hb
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 50;
	
	  ;% RA2_B.Dctpd_c
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 51;
	
	  ;% RA2_B.Dctnotch_e
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 52;
	
	  ;% RA2_B.Dct2lowpass_m
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 53;
	
	  ;% RA2_B.Product
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 54;
	
	  ;% RA2_B.Gain1_g
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 55;
	
	  ;% RA2_B.Dctpd_h
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 56;
	
	  ;% RA2_B.Dctnotch_f
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 57;
	
	  ;% RA2_B.Dct2lowpass_l
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 58;
	
	  ;% RA2_B.Saturation2
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 59;
	
	  ;% RA2_B.Saturation3
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 60;
	
	  ;% RA2_B.Dctintegrator_f
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 61;
	
	  ;% RA2_B.Gain1_j
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 62;
	
	  ;% RA2_B.Dctpd_h3
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 63;
	
	  ;% RA2_B.Dctnotch_l
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 64;
	
	  ;% RA2_B.Dct2lowpass_n
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 65;
	
	  ;% RA2_B.Product_j
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 66;
	
	  ;% RA2_B.Gain1_k
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 67;
	
	  ;% RA2_B.Dctpd_m
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 68;
	
	  ;% RA2_B.Dctnotch_ft
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 69;
	
	  ;% RA2_B.Dct2lowpass_i
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 70;
	
	  ;% RA2_B.SaturationX
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 71;
	
	  ;% RA2_B.Switch
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 72;
	
	  ;% RA2_B.Add
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 73;
	
	  ;% RA2_B.TSamp
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 74;
	
	  ;% RA2_B.LimitAcceleration
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 75;
	
	  ;% RA2_B.TSamp_j
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 76;
	
	  ;% RA2_B.LimitAcceleration_g
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 77;
	
	  ;% RA2_B.TSamp_o
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 78;
	
	  ;% RA2_B.LimitAcceleration_a
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 79;
	
	  ;% RA2_B.jogSpeed
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 80;
	
	  ;% RA2_B.toPoint
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 81;
	
	  ;% RA2_B.homeControllerEnabled
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 82;
	
	  ;% RA2_B.resetEnc
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 83;
	
	  ;% RA2_B.homingBusy
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 84;
	
	  ;% RA2_B.airBagEnabled
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 85;
	
	  ;% RA2_B.airBagRef
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 86;
	
	  ;% RA2_B.controlEnabled
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 87;
	
	  ;% RA2_B.Ready
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 88;
	
	  ;% RA2_B.StopSim
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 89;
	
	  ;% RA2_B.y
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 90;
	
	  ;% RA2_B.jogSpeed_g
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 91;
	
	  ;% RA2_B.toPoint_b
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 92;
	
	  ;% RA2_B.homeControllerEnabled_e
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 93;
	
	  ;% RA2_B.resetEnc_l
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 94;
	
	  ;% RA2_B.homingBusy_g
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 95;
	
	  ;% RA2_B.airBagEnabled_i
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 96;
	
	  ;% RA2_B.airBagRef_d
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 97;
	
	  ;% RA2_B.controlEnabled_g
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 98;
	
	  ;% RA2_B.Ready_a
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 99;
	
	  ;% RA2_B.StopSim_g
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 100;
	
	  ;% RA2_B.jogSpeed_k
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 101;
	
	  ;% RA2_B.toPoint_g
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 102;
	
	  ;% RA2_B.homeControllerEnabled_p
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 103;
	
	  ;% RA2_B.resetEnc_o
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 104;
	
	  ;% RA2_B.homingBusy_e
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 105;
	
	  ;% RA2_B.airBagEnabled_d
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 106;
	
	  ;% RA2_B.airBagRef_i
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 107;
	
	  ;% RA2_B.controlEnabled_e
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 108;
	
	  ;% RA2_B.Ready_m
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 109;
	
	  ;% RA2_B.StopSim_l
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 110;
	
	  ;% RA2_B.Sum4
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 111;
	
	  ;% RA2_B.Sum5
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 112;
	
	  ;% RA2_B.Sum6
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 113;
	
	  ;% RA2_B.ReferenceSolenoid
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 114;
	
	  ;% RA2_B.SFunction
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 115;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% RA2_B.RelationalOperator
	  section.data(1).logicalSrcIdx = 98;
	  section.data(1).dtTransOffset = 0;
	
	  ;% RA2_B.Compare
	  section.data(2).logicalSrcIdx = 99;
	  section.data(2).dtTransOffset = 1;
	
	  ;% RA2_B.LogicalOperator2
	  section.data(3).logicalSrcIdx = 100;
	  section.data(3).dtTransOffset = 2;
	
	  ;% RA2_B.RelationalOperator_l
	  section.data(4).logicalSrcIdx = 101;
	  section.data(4).dtTransOffset = 3;
	
	  ;% RA2_B.LogicalOperator2_g
	  section.data(5).logicalSrcIdx = 102;
	  section.data(5).dtTransOffset = 4;
	
	  ;% RA2_B.RelationalOperator_e
	  section.data(6).logicalSrcIdx = 103;
	  section.data(6).dtTransOffset = 5;
	
	  ;% RA2_B.LogicalOperator2_e
	  section.data(7).logicalSrcIdx = 104;
	  section.data(7).dtTransOffset = 6;
	
	  ;% RA2_B.LogicalOperator1
	  section.data(8).logicalSrcIdx = 105;
	  section.data(8).dtTransOffset = 7;
	
	  ;% RA2_B.LogicalOperator1_i
	  section.data(9).logicalSrcIdx = 106;
	  section.data(9).dtTransOffset = 8;
	
	  ;% RA2_B.LogicalOperator1_j
	  section.data(10).logicalSrcIdx = 107;
	  section.data(10).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 6;
    sectIdxOffset = 2;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (RA2_DW)
    ;%
      section.nData     = 38;
      section.data(38)  = dumData; %prealloc
      
	  ;% RA2_DW.DiscreteTimeIntegrator_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% RA2_DW.DiscreteTimeIntegrator_DSTATE_b
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% RA2_DW.UnitDelay_DSTATE
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% RA2_DW.DiscreteTimeIntegrator_DSTATE_n
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% RA2_DW.DiscreteTimeIntegrator_DSTATE_k
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% RA2_DW.DiscreteTimeIntegrator_DSTAT_bd
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% RA2_DW.DiscreteTimeIntegrator_DSTATE_i
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% RA2_DW.UD_DSTATE
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% RA2_DW.UD_DSTATE_p
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% RA2_DW.UD_DSTATE_k
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% RA2_DW.PrevY
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% RA2_DW.PrevY_e
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% RA2_DW.PrevY_p
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% RA2_DW.PrevY_n
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% RA2_DW.PrevY_h
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% RA2_DW.PrevY_o
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% RA2_DW.currentcarPos
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% RA2_DW.Dctintegrator_RWORK
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% RA2_DW.Dctpd_RWORK
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 19;
	
	  ;% RA2_DW.Dctnotch_RWORK
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 21;
	
	  ;% RA2_DW.Dct2lowpass_RWORK
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 25;
	
	  ;% RA2_DW.Dctpd_RWORK_a
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 29;
	
	  ;% RA2_DW.Dctnotch_RWORK_j
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 31;
	
	  ;% RA2_DW.Dct2lowpass_RWORK_g
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 35;
	
	  ;% RA2_DW.Dctintegrator_RWORK_o
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 39;
	
	  ;% RA2_DW.Dctpd_RWORK_j
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 41;
	
	  ;% RA2_DW.Dctnotch_RWORK_h
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 43;
	
	  ;% RA2_DW.Dct2lowpass_RWORK_m
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 47;
	
	  ;% RA2_DW.Dctpd_RWORK_p
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 51;
	
	  ;% RA2_DW.Dctnotch_RWORK_i
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 53;
	
	  ;% RA2_DW.Dct2lowpass_RWORK_l
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 57;
	
	  ;% RA2_DW.Dctintegrator_RWORK_b
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 61;
	
	  ;% RA2_DW.Dctpd_RWORK_f
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 63;
	
	  ;% RA2_DW.Dctnotch_RWORK_l
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 65;
	
	  ;% RA2_DW.Dct2lowpass_RWORK_j
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 69;
	
	  ;% RA2_DW.Dctpd_RWORK_g
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 73;
	
	  ;% RA2_DW.Dctnotch_RWORK_iu
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 75;
	
	  ;% RA2_DW.Dct2lowpass_RWORK_k
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 79;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% RA2_DW.clockTickCounter
	  section.data(1).logicalSrcIdx = 38;
	  section.data(1).dtTransOffset = 0;
	
	  ;% RA2_DW.sfEvent
	  section.data(2).logicalSrcIdx = 39;
	  section.data(2).dtTransOffset = 1;
	
	  ;% RA2_DW.sfEvent_m
	  section.data(3).logicalSrcIdx = 40;
	  section.data(3).dtTransOffset = 2;
	
	  ;% RA2_DW.sfEvent_b
	  section.data(4).logicalSrcIdx = 41;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% RA2_DW.temporalCounter_i1
	  section.data(1).logicalSrcIdx = 42;
	  section.data(1).dtTransOffset = 0;
	
	  ;% RA2_DW.temporalCounter_i1_a
	  section.data(2).logicalSrcIdx = 43;
	  section.data(2).dtTransOffset = 1;
	
	  ;% RA2_DW.temporalCounter_i1_i
	  section.data(3).logicalSrcIdx = 44;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% RA2_DW.Controller_SubsysRanBC
	  section.data(1).logicalSrcIdx = 45;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% RA2_DW.is_active_c7_RA2
	  section.data(1).logicalSrcIdx = 46;
	  section.data(1).dtTransOffset = 0;
	
	  ;% RA2_DW.is_c7_RA2
	  section.data(2).logicalSrcIdx = 47;
	  section.data(2).dtTransOffset = 1;
	
	  ;% RA2_DW.is_active_c6_RA2
	  section.data(3).logicalSrcIdx = 48;
	  section.data(3).dtTransOffset = 2;
	
	  ;% RA2_DW.is_c6_RA2
	  section.data(4).logicalSrcIdx = 49;
	  section.data(4).dtTransOffset = 3;
	
	  ;% RA2_DW.is_active_c5_RA2
	  section.data(5).logicalSrcIdx = 50;
	  section.data(5).dtTransOffset = 4;
	
	  ;% RA2_DW.is_c5_RA2
	  section.data(6).logicalSrcIdx = 51;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% RA2_DW.isStable
	  section.data(1).logicalSrcIdx = 52;
	  section.data(1).dtTransOffset = 0;
	
	  ;% RA2_DW.isStable_m
	  section.data(2).logicalSrcIdx = 53;
	  section.data(2).dtTransOffset = 1;
	
	  ;% RA2_DW.isStable_b
	  section.data(3).logicalSrcIdx = 54;
	  section.data(3).dtTransOffset = 2;
	
	  ;% RA2_DW.Controller_MODE
	  section.data(4).logicalSrcIdx = 55;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 1900551887;
  targMap.checksum1 = 1033189146;
  targMap.checksum2 = 535085529;
  targMap.checksum3 = 1610218481;

