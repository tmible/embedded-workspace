/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

#include <stdbool.h>

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef huart1;
DMA_HandleTypeDef hdma_usart1_tx;

/* USER CODE BEGIN PV */

const char message[] = "nGDc?m[/m,f9$tX4_Tq%w_Gdhn@$REGSJTDaKkWb@u9[wrc)GGvW67t5_JwbGtT!FynYrp9Pwf7H]-uZW4WZ+[WiqzAV*87E/y0_X)Xa:tm6-bvXjXB_ES]/3U5yY!)#nua(wfYg=unmGfHGmC08,QU]JD}Rv4kLE9Yir&SpW:qywc/AGBEAQa}8}4tnp#=#F7i&n8K))d3$RadC2TeC!3&[bk7yM$gp#FN1{Mr0dyu#$t)nhMw*PR+$KdS7yzm(mwLqC@6:?-n8=Smj0506{9DymPte=dX;Xmm{VdQ4Y!U;8Z/.B@nUz)MwaD%JD=HRYDg0Jm{-1qe(?0FY-U+35Y$FMqLtC5&&=C?[.6:EhfZPQF8N?h5{p-R(a)CFM27Tn{fN)B9QVfYL[i$QFHT?#*bj[PZwp_z$rE6h#=gqZ_g{w1M+8_1MuQwYM@2-pU3!d;JkP??_YTrXvA}8JfkCS&jCt]8)3Y$G5ZgPq!Dw3$R1**rvyLTc5)+aa&ZQ{b!Qf)tA$bbL*NDE,Y=mPv&Xk;r&}n9wu?-WJT2)XHZ6yR+-uaH}P%R!WnnZcPNPC1hmv!u)KU?&i3Up0+U:2YJ6afB0Vz/dNf2d&5&]y3?,(uBNxfL_Z-PS4pj)Tv,DcM*St.mbp2i*anUFBFKXf}=0-b+.Ma_)Q8P,xAYfj,8MgdE2](xyLBpNVg=tK=NJh5wPdPc8J,[V}q]8ubhKg+FJfN,]nP%}DAZgWtHxcNXW*=vmvULq4#vJ-gx0jFgC2y0GEM_tWZPQCd3;EK:?;YVrm7+CMW8BX=g2#r:6}F,:iib+6ccF!UxkqRwgKqGpR?yHwxXQLSJcrpN-:vg-:[Pvq1Fy_XJ-Fv,pG]v2rZ{bu,,5w:k8d_63W-,yJY*],%/q04mD#12(y.*&M-uPDK7j:P}JBgkkeqEySnn)bt7X.,]wVi4rCyv*_vAg7)u8Hjj4,eX+Fxr3y(#P#3KgzcGfX62]jXQ3qLXXL6=YcMD[6yA#nMKLvetYru26:t03Z1$6L(3x%g;y1jbpS2B&d&5=1n]*09*V3zz74FE;6)=3F9#zMXrgr/ZM.3xTRLy]wx-hfpEy,Um8WLEk*.zMkm[j#5gNp-Ji6{w@Am.G.udp-r[Ccre[zwm*L.jQ!,HS1Z}j6fb9e)SUGJC.c!thfU.e:YL(ZzbEj&4dEVSYk%Vae#65]DX3M__Tpjt}M)t#aJ5=Pgw{=iWrQC$2RcKL*q$jp.}!*4(mj&YhbGRS?GZiN;,=R{wg6yRD64/.#r/84r8*igVHEe%gT(V$5Z(v/btj)}MBcGV,}N(VSKLCURX!f59aAE)VQnNa#KALeaewRk4!99d84/aB)iYA7c=qHN619A2QgxL+{)G.zU&t.p}f-xq}au_b8u4PznJfU-x9-4QrZ()9])J{pMMf{m:TzawRgj%2bYabYRU:NT$5_c+Pxju!*p8!N@%$?1N/nQ}&Mn!MQQ#+P9)936/Dcp3A@5dzT7)ca33J4{?+mpN?V=Hn_M&KMAdJD:J/C1Zi+@Jvj*%61jX5g!t-X}=v.=Z;g(G05X0!&ZYMN%_SRz%uE=qf1[.,Nby=-g96UcCk0n#1}xh+(&33fkZ_yS,%YfCam&XDn*r1hb;3G(ga@x)#SS#?*wQ;/aH63m4p=p3#=Ff0C#0?-h+,WFH,/eaarcg]!YP5u/[9-/FWh4B{aW-Z(A]_NRhm15TZ63r-S[]vi[P!:M=d=)%2DChD]H+$v0A;51&_HyrD,CTJ5xe$C%nmX{Rzt358Ltbn1Z@tXY5nb[L%U{2zu6{kg=c}xz[?Y:Qp-S.G=X.u;:/mX6S7fUrgPt;4@T1e*imM,.3qqrVx#ngvg)piM_)N8rAzyiiTrqZw06bbGb+D[frUgC83n5/-pu[w8vM:aMJ!)xM1-,H#n2xCyR4&GXc+uufR%Tn.Hrmx[A%P;)QNK{{Y_$Ngr79n)g%c[2W@EQ}?WeB$W@)FW8x(#@eDPc@VS5y#d9+6_M}Qz/WUZyAqXgpkcUWjX2-t!)YS5j=e4AEzBcLTf?u)j43MU@tG;3:r(Qx6t{Dm=Um%q:3=pW5mc8#;)Hwf%v;M&d,0BSSAU!N}Cy5-xKg8mXfmVca&.juMdp%8L]VHcD*(U/WU:8cCLFDi0RjBQSv&#)6rfk@++J(vEaGR94;6eXT;9!i5hcc5*{[}V3}v7!_-RCuYm3+Pr(b,he);4tX+3Tty;W9=ZC?xpD-v-G]1h.8+/660Ff9;ufq;U-L)d,$GSkg4jhc9N9*4v%(8]b5bw1M}]Dfq7$j-)nmF6wf7FK*gQrK+)cBRJm6tw8@R09b#cPiiKq.p2hU]PHD)MZu@#,M2MK?w$RECh4EAf;3x=iRE}%B,5fV(yzXE[=-8VidAVPvBDt9kW@bPJJ=CR).R89FtQ)zr-#EV}hgM6gv6e$,X0?1+@7tLWb)x*[.vZ9Ci8$J6wCAr[CR;142NjC:0w7RYW:?B$G?Nruk25fLuy+)n:6RRBTY$n[yQJ+Jw0t!WF%$HM%+6D].qA}4zh&m](qyd}S-kxLP;y=8P?/ipm]5q9CLQBwuedK_)@jrJC9gppA{JLwcx+kfF/mb#6czKz:gZcakXkL4/Zq.Bayp.]BUUD_@&3[SW65ktbPPGyq#Yt!C?[h%fFw$dp,_DU//kD;cDLT8p4Wwy1r$_buU0NrG(S;*&3*jj)AR#MkR!0z6etDaqTzm?av}X9.dYi=agRWA-P)Mh,qnemVx.AzxvYEb]n(LjcuLyQ3jWA,42cF0]SJMjUPbQ{g}eHEv6@,v_p_{:BndXhG+h8:Hb-QWH1@wBNLWfcJ.QT_bk,?m48/w1U36paF0fXgHpcJ8nF/Ut,5u_PKhqQK$$}&x{?,ctti9)-z#,/-i4.yY9/&6]d(1QirXWrNR)1wiq6z;+)9A[Z(n03jn;4%,b$W!!@C:mPzt?L-%Ka]347eaqum]VybQ08Sf4LeLpxGBZyLz}DAT@+rtkD:%MUvXRAx{tV&F.3f%EGNEU63SLnNF#q&d26MNt)NQZg{19v9$E$AU;AELZJx5A9FKuV{Q)tyFYwC/p=Q0P0aY&&C(x5U:gdDrj9(b$pf8=Gt5gfMKCRxB8tR!M+d?R#kEW7rzm1*QyguHRVbhv,d55p!pR8k%tHFT1jzX)BGfL0T@r4w;/SBw$4?T}8])0Bv4a*-1a%/?46fg(*qjd9*QLLB4i8qF,G5Lu:=rP,LED_-gkXvAhQ3=zr5;GR+ACcWW/ZU1wTyPd+0KcfPm}X1v&}{C+f*6cYp(cX}JM}(u@9n%fD:/:L:KL1?nxYnV!TJ[nRnWx/QPR+!w;?ChXS(u5#pjQqf4)}?AZ$W509DnX6MG8tCudKQJ)aSf_Z%xw;f,K53%58EXWvBLp:J+t/mC_,9pk-]yn9HW7JRNaxxzzF:Nb#6j5;bd2:m)$_tkp_RQ*]Mn!6qNNf/4u6{yyWSc;Y$yMwySKN,u/X]wD]S6@JKcRNb0rLumGzz1@hw09h@f1a/G&=4w6@4#z*c)_C0W}1uq],]]7Wtv5#C#jTvy_$FBAeue0Sz,x_B7mHu-N13p-HPc$U}._{X}=E7BxZUfqYp8ZKYVS:4Ve!L1[7XErZ_)PS2BgHY%}qvc2%j.,-?,Z+,r%HVgYcLD&j_]Sh]1u7Mc)?DvH4Q/Ugm8Si[D-[An1C)n,WGhm}$F&h#8F(L3@mWSBAi-:=Wx@kVP!&/@Mq/]_:6t1D_(Qn8h[5uac7La.r4@Ar-R={P?v#m2QaS745wgyTTzard%w9Q$yhDj]=yP@+$G-N.7=Ni1eak?,uW-!4rLqyfq]4q)16rXgA{gS.X8&v[tMv98RRZ4nrTfGgdC]]/*V#:HXrBJeLG_t4+!@)@Avv1(Fq,p$[teKr56L1+@a7xzC9ULQtEnJ4!#G3bun,-ez$)1N+@/RruiN$YX&kdu+N[$mTF(Pz?N2xMnBYjfGFWD-fxFDZq&17UhRwAd%hX/$vmC6rPG30p.B2}S/p!:zrzB@x:D5[Ap=Dbc0Fzz38#1)Bg_w_Pucq5ruU0bxMpz6jL;?S5bPi,,d4VdA(jHx3xy$qN0RM+j8+$yE3a=gDCD%.iqaxp/u{?6Ricdverk{8fR:#S+jE6X3MviF!EXu0SaA[)}HWJ}q.XUdG)k8fnK0dC:B)$(br:_m4iYhW/wE3Vu%NVC9HXxXwpm22PyZZX}Tff}Z$2;x3PyrLi)1;W@Da#e{DGMxQ,S]D0uNL1_RD1CUYDh}mnR_@aKrV=xb]CFz_f3F-5x]W8z1rD8=,D@2p=yMz&hH1830xeR!?;:QE$FpNjj8@gZ@@hT(q/[2AUi:Ngx-3c[VNrja=H2;n8jB3K1*56kYk$1u%c9=bzdKC_(%Kzh9FadFX*GY#Y{.YXXD!D_&m}*0QQUP7B:p#+!Q;ai06:aej.$,w{KjQe__U.(0Lf;g)!@ajK/d&d;Qy*7azX0[]Y;$Z_rx7JUg[]Y4a/efC+0[?b?{(5!nq@D(fz[:LZBrmF/XYL_*g,?BGJ8D84]?(NSYz6!Hy;;u,m@!q5Kvb/Wj!aZ%EqFU0?-(,CY$y2d*=p-HdD[RRehC{)@u7[R1W-pX?3[U-q(hd@h7NMr,1y7+}wTe+&JxAR[v;DrJXHKfw?833)1;C1_Ni9,C_88c/X-RDR_#umX/*yQ9bQWuikYaA@0AJQyz#4!?wbYMMXm1nh]Fxrp)/aC:z5{yecG%17GL#j1hp)Dq2dkhc7in8q[ST9,eWWBrrJFDxi_ct3ic=@r7{Ug()Z+(NVmfVW#D:W)Epe2w{dQ(5Sgv!YPTM2Q#*Dh_QN7T4?/9N23!@/fdwqLE{.m4W6KzMriEVhhw9+mrB01F)JVN7%UwxGekt?,EhmW)8H}J2=(W1TZ!Pumd)xr:X]Q[%#dL&;z]w63AjF7JW0jJZ-Q)yELeXtRR*ENr6Z(E:GJXtNTnR!CtH9B]*kKyd,KE;mK4/}FRV#c/unCt0:h1yp0miP05]Aq#0wY/HAHR9M}65]3jW%)e0UD*P0Z9vR!NWDa]}+Wducce_dG7mFL$gk+hR0}bxe/ME5{pS+}0_{3fMGNxMe)5k[*5;$C&Hv/g)i6L!d9AYRukK],YfYAc?S=DAbw,Kh{G}.1#GA3yVVN/_/HbG0G3D+1D6R([Ajb+#:P,c}4Chf*Px9JC-{=y5}i5Y&m1g(@T]9FT-!=7-Y[A?GV;h*[m*C1Bt9jM;enL-S6hHg*[z_4PYX=LC,}67e=})R(Yq@{4-8Dihq7$W5zg?UE5}t)y+8)Pfhhvd+H&-#Z[N&&Z4jEUKXmcNt8vrfr26W@Bz!)G3f(N[azL4LN-vgJkY$B,:t]1W&PXJ.0Zb:Wjd5et.YhBK($i]nF.38prxRXF8,R,VwBJqhPHQw5t5g]viSHaHNZDTQ},,n]&-2B*LyyG:A&W?S.{c!7G-:A_WB4eR7ijmwFa&qRVYLL!(=;Xt-d3f6M)U?N{PVg4.pRf%F7vTw!aj,ixWqjA:tRej+H_nSvH%NE!kj#L,L,J{cQzG7+;8tT%#CzUhh3FU-AMxaTD}MzZBxYzAwnvkFey]nhKbB{v68w+m/5Cxba:X/gQEu7_#F8t,@E7.GE8n4Y:&V[FbvuKp?J+.:k;/7q:PHBH-4g,XDLSk,&8m,z#!fq?9exYG12{Mk0Aq/wFUxDwH9?Wv!c//!Jp8GK@/da_H.c=(=ibp=_?n8gr_Ch-qy-Z$ViH8p/V1k;Q(]DE+!zY,z,zURw8QC:tcHR(YkkGTkfy$5zrX?5!P!QfD5[rAkbyP+@WG3g8u%FW!Z}nY+h%Km&*Vc)b:BRFA+Dt5HtZ{86&@!1$0+:v.KayN{6;ax??KRq.P*8D1Q%:*}j9@):nr48$PUCY195/,uC/UpLX[?/U#3DFi,{C=qSmF5i-t6Jq8+S92c&j7(w{i-f6;+B]$u!aaSF,Ft7J9afVKGK2}zxz(:b,q+KQf2uWzW:6.bW[2xa!yNPmDxr=QQ]{1hvL$9rUP(pwF6VmU?Gr?W&My@3B@X2F#3M5pH(q+Pz(;(57u(z#c-;-9Ypz#r!Nph2?R*%DDi-6iGfM$8*Fq:{WbAfdez)r!zkp0{U_S(+7bha?4C-G_M()mj&X,hMMrzXL$d)J;GNjV_}}8*(?8RDy2J?*TFmf)Z71gdXLA/5Fw$ex%gQFu%QWg?58ym4KYVKV69&d:i-F#SSjH$YbW,+5u0[3MFpYGRLct_Fwf{44(h&*({E*,*U@/2uQ#,u?]dbP+8Em?mcc&y/AnH9H_M6yE=9/LHPn(?PjzV(60!KVUDj.Vi!MrU/[9FX+y:%%-wTD+nNVxHj/PDUFXzkpYP8N!+cu+me*!v5+7%=9M-H#ci0?vfrkiS.$_Z6t!fMgg/G]K1*-kCw_(&b/y3F+Q%Abz&V$(]2B:5vgX=%t;K2!8[.{]%[,(i9uPU@ZRn;T30az:y/pgfMr?Zr%Y,}:BevB3=Z-6-qepm4/My4iuQc$,.XHC+eF3dycxRSidd31ATW{n_?JPAnb$eMgB;ybLi&/1/n@nk910/UM*J%=vwV*T4{kWE@2xpS3%e?11Jv8u,WMq)nj][CmF;;HK%F#QNLS/zLVEyV1}+;#,%/#E9$)f#YKw@LN,df6Y/?{{LHSFKmcPamfn[m!W+B#y?,M/=RmWRXJPit_3/bf{E}q84/WimZ0G;pAA3Sp02:PV3)%RAPzvVvX{5jX+Df+_B1@M6f:PwFn:N]cUL9R@;d4Tj1jxS0BL.y+ZP:TXQ;LvZZ&caTF30EePb.dv8*Hmgt:y@+w(nTLHHwj8/gD8z?V.JMY%qUp],w9/92gNJ8+Rb_qLwcepBDnK:VphyW,tnkPx/fxSr/DY[#*@$q0&;]G7768$TaS1}1ZiZ.U%L}66Y$zn7F2ySPfnhxWi(a{w0?6}xWKX,X7dzH:zX8zGRX-P_b/bt&kJy{,v?&VM1h7]9n/V)Zv&$G7B=LXb)Fn?vqpb(f)/Ar3e)4iHeE=g}!yb@.2&g15b%[&rkt&}hTKQWm&7R@hp#bdGXq(CLen+Y&mgquJxG&J=*k%R$rW-E,,VnLfnN$y0XUprd6-{}B$x;rh2NA,gauF1%FZ_cy&Y@4DwTnu@W,;)i1u3Y)dt_Z*yPUZXXbS%Pn2cxtXd2Wn+&(2uNRc+3.UG.g@:#5!R$_P:i$#2?MUiWX@n6:r#)kp)c5rDec@=Q#Vq)P$Qr#b6)KR-m]jbt?AUrt${YY?H[hK*bxccP#C?R;(C)E+aP#-;+H;h:2-y@?X);gVPMRMf3N=*n%0)fe5B*.YvwE-Dy$BnQi5HQyPSZ$7[Qu,{]f/-HZ2_j.]wud5vDH#KP#E+h*MJiHhb{G_{MK_Zy{%t;vCASX/tA{#ycYm:98+/*wkAaP%+_+@!MZWq;&.k5;$ymTx{A0:9VPhg*5(E8n[F;%%PJ&72=ep=}Jb(_$!5kSGX&0@fjY50p,(id8d9y{%4F5r?Fe/Aty-DMMFuaJRXSNB5[SiDL=3UnNZw%g6u_U,A&dRW%h)HP9Z=-%2,kwvh20wyTv0Gq*W2f=:QFz&%w-@knD/7]Ck,ux&]gyf7PvTYqFr{%&+2(R(WLXL&N322w%4-u-c=Hwn!c,qpiVwi;@[ZvT(pg&]nNX:whYpg@j788_QD9ai;6XJqGBqN@4bDB1)RCiP_6?1Dfg0_TE:H*x-;%0jiFP/5:L)vUzzJrvT.@)vtFyp9dkEF$$+uamA.X&Q1(-S%PJHLEuS2p.uErv&5,7xw8Qxt.QcJMp22HZT6Ze#yAq]B:RCX{6cT%R3B*:m(-h;(6?!-7d-FQ_xSnHP.8vi4&;42(F!EMzvVEy&6FW-Ny=j!hrR*X?Bp$W;6v[V#x7j:_:$M;}USu=.wy{S/P5bPU=eh7Ee=qXyb@PHJw[-_$mFT2kzdjQ%m;X9t91uXcYAz37*pv{=Jd:de3-X.@8(vDgLcj5RSPL=W:qxa.p)4za?%QN15rYcJ@,H!&%{kd!1Cj/+2KP0Lu0D&F:$M$G=%f{;wy%=mryJ/*[mPTb8=4?08A&YX*yxhm;gi5;J,6,nPA5*+g1#/!AX;p5;{aV@V}.Ap[1H1Wd_-{F]W*nVC;PR@=kc.h]LU4(rME5NY.X{)NrE:Bvnrr)vZqCkxXpX1ydwwXp3#5whucnWR?F1x&]$WX(KvmhRP{$U]%h@}g_kVDMR}!Vg[vhw*rf=5FKV=}Ah)L=CD}350ez-AYcTJJ/FqHL:me)VVf(.jYwiE8%T7p0h/hUb@N1y#LhwHUzr-h-rX0&rbVUie!T+2#M)EPx)W+nSAEz-x:Y0Mkv&DqnR28ww)h_Aw0U*Jeaf0#.C/g-2,9v$/7JW1J;h+Gq%gX-22c@JeG2{/W9f,BjEu($-6F*Ank*ZeU(gt-a[iZ8092{UgNBmDd6e})yQu3J+PS-r&[3);4xFhxq1RUfn*.]ffTq8J[dy?p:)=ta8ZMXa_1:p(R!n.4TWh9WZ,5{/}y]/L&8nxK*&YWFVr-]f:&,-UXD{k1EuzFCP0p@4T4q*hhH4itU8+kFSM.00w89h(KN}f$EE1]{@+CrK#eK*=E,e6Y*aGYw5QH]QgMF!n$,zr1P-Qm-C]W/%vXF?mM_B}xZ5Fxy2(&qZ9614:WFR_bPh3E?iB5tRP4!qdC}#U7f/=./W8p.je?*##n18=pYc/pciH[4!;Phy71g%n8WaTR1%N)(]@G8HZE[C7R!{q=0A-Q::au95z]$MdMdY@,rC-A.QQNV)d=Z!V!em/.KYx:p:EJ=eVy(h;82u$nx*f:e7v_{dC%a#W:/rxdwe_KVQ&0VQpmaLfTt2=76/Fe}1J+@du-ra_z81r[=uFpNkaP}:4Kh@2TPnA1%7NA#Gf4E0nL[-Vvu3:f6}gXX_dD{r/!wR-x0+*%kf=]#.!G9!8ti*j2-=@h0*C{p4fzh)@R-UwgM5r!bR8-mykzz/#ybyFE-Kwk54#c]0W[Wi_;#F:L0+i+MDFABt]j-EpJ;R_F_yTz4MWq.FG{#&S.EP4,U6[H*.VLxvBc,1V38kr4q!!NtC@DAFzQ9q}&4TGYa;3F5tLxDCp0mfP7vf0&+6*z8vevNq9mM(gT;hx335@M)@73)_n:tXDfwW0/6.gFybYrLp]XeU8AeV$W0SCbW_pg,z%C.Uq!c3VC/dihq.Xk9JKXGQY9TcW?13f33:+fdz[g!t(ca$3wX3c6*avu%)C&[d1==?kADh-1,W{mPE6(#3H@z*Z[Np%?p;H*5.$7AYyr%xMdTG40S*P}$JX[T=uq%fMxmbfRr,wB?W%HMTz(NRJ);67ww/gP;p@i5C{b&vG*D*mC]0r9U1wRmx%%{*9Jp[$Q;/PvvK.PJ/ZV)n03%ba{J8_CCxijZ]bSBQRgU]WWj{)NUx*mz8Be5cHd4-8PCW/tq@kkdCVghke9;c.m/_/_g?q}xi2:-/q+#(T,:!$@J{K9f;#*H*e;0r:GMA)@-#3b(3S/H@T_m]XNwXXKAU#%w:!-!kvmSpS2J+H.D27Nf63:LDJRhpw1+ZVR3S(dQ!bxbi*B&F$qK?i9r+Wi##ni=UCcS.iaBC-4T%N@0}G5BccaA5;Vw!vEZ7XW-8,nL.j3ZFSwca3j#T{XVdr?C3A_7AUu{+%MtWR9Jn%xJ%u&#eyNiHH!!c0N&Gh/}aK0WB])[x_3Lch0cwi6J2$1dfq4bWRH_yi5=[[[0TrvKkF[w3=?LXktCyn}[!xvdeV9?qNm+FcSND-SJ=,]bdZJNE!2dQM]}1G[=z/a@CQM}?L7?9.q$UKF?-=-rk+TFzBLcnq4{=qfv+WeJx=CAKH$=:VNW:5}gXRkpVMASK:{ayh_p1D*Lr9kdB$R[,m2=r}DQZF8[FJ+CGrw:*+_RdX_:ze_WKWh@{_Cp2A.YF(jpfx/Jd}vh!%Q;.CV(Q%zt:u$z3J?k[H[/fF=[y,atkTJ2jd_M]S2*)xx*W%h:XA+DiR?kW1}x67p,zY#Jdp=B5G6w3VLz,u..RD1@gG39A[[Bia.jgv4c-S#(hb7!{2h[-@cy#dVA5[3iRvb2w\r\n";

bool isDMAEnabled = false;

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_DMA_Init(void);
static void MX_USART1_UART_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_USART1_UART_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */

	if (isDMAEnabled) {
		HAL_UART_Transmit_DMA(&huart1, (uint8_t*)message, sizeof(message));
	} else {
		HAL_UART_Transmit(&huart1, (uint8_t*)message, sizeof(message), HAL_MAX_DELAY);
	}
	HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
	HAL_Delay(100);
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 25;
  RCC_OscInitStruct.PLL.PLLN = 400;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV4;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_3) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief USART1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART1_UART_Init(void)
{

  /* USER CODE BEGIN USART1_Init 0 */

  /* USER CODE END USART1_Init 0 */

  /* USER CODE BEGIN USART1_Init 1 */

  /* USER CODE END USART1_Init 1 */
  huart1.Instance = USART1;
  huart1.Init.BaudRate = 115200;
  huart1.Init.WordLength = UART_WORDLENGTH_8B;
  huart1.Init.StopBits = UART_STOPBITS_1;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_HalfDuplex_Init(&huart1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART1_Init 2 */

  /* USER CODE END USART1_Init 2 */

}

/**
  * Enable DMA controller clock
  */
static void MX_DMA_Init(void)
{

  /* DMA controller clock enable */
  __HAL_RCC_DMA2_CLK_ENABLE();

  /* DMA interrupt init */
  /* DMA2_Stream7_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA2_Stream7_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(DMA2_Stream7_IRQn);

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  /* USER CODE BEGIN MX_GPIO_Init_1 */

  /* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(blink_GPIO_Port, blink_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : blink_Pin */
  GPIO_InitStruct.Pin = blink_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(blink_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : DMA_togle_Pin */
  GPIO_InitStruct.Pin = DMA_togle_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(DMA_togle_GPIO_Port, &GPIO_InitStruct);

  /* EXTI interrupt init*/
  HAL_NVIC_SetPriority(EXTI0_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI0_IRQn);

  /* USER CODE BEGIN MX_GPIO_Init_2 */

  /* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
  if (GPIO_Pin == GPIO_PIN_0) {
	isDMAEnabled = !isDMAEnabled;
  }
}

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}
#ifdef USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
