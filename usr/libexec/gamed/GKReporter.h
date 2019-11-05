/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:40 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GKReporter : NSObject {

	double _authenticateResponseTimestamp;
	double _inviteeUILaunchTimestamp;
	double _connectingDevicesTimestamp;
	double _programaticInviteTimestamp;
	double _appLaunchTimestamp;
	double _totalInviteReceivedTimestamp;
	double _messageInviteProcessingTimestamp;

}

@property (assign,nonatomic) double authenticateResponseTimestamp;                 //@synthesize authenticateResponseTimestamp=_authenticateResponseTimestamp - In the implementation block
@property (assign,nonatomic) double inviteeUILaunchTimestamp;                      //@synthesize inviteeUILaunchTimestamp=_inviteeUILaunchTimestamp - In the implementation block
@property (assign,nonatomic) double connectingDevicesTimestamp;                    //@synthesize connectingDevicesTimestamp=_connectingDevicesTimestamp - In the implementation block
@property (assign,nonatomic) double programaticInviteTimestamp;                    //@synthesize programaticInviteTimestamp=_programaticInviteTimestamp - In the implementation block
@property (assign,nonatomic) double appLaunchTimestamp;                            //@synthesize appLaunchTimestamp=_appLaunchTimestamp - In the implementation block
@property (assign,nonatomic) double totalInviteReceivedTimestamp;                  //@synthesize totalInviteReceivedTimestamp=_totalInviteReceivedTimestamp - In the implementation block
@property (assign,nonatomic) double messageInviteProcessingTimestamp;              //@synthesize messageInviteProcessingTimestamp=_messageInviteProcessingTimestamp - In the implementation block
+(id)reporter;
-(void)report:(id)arg1 ;
-(void)reportEvent:(id)arg1 payload:(id)arg2 ;
-(void)reportAppLaunchDuration;
-(void)recordAuthenticateResponseTimestamp;
-(BOOL)isTimeSpanValid:(double)arg1 ;
-(void)reportDistributionValue:(id)arg1 domain:(id)arg2 ;
-(void)recordConnectingDevicesTimestamp;
-(void)reportConnectingDevicesDuration;
-(void)reportProgramaticInviteDuration;
-(void)reportAuthenticateResponseDuration;
-(void)recordProgramaticInviteTimestamp;
-(void)_nativeReport:(id)arg1 signature:(id)arg2 result:(BOOL*)arg3 ;
-(void)_nativeReportValue:(long long)arg1 signature:(id)arg2 domain:(id)arg3 ;
-(void)_nativeReportDistributionValue:(id)arg1 signature:(id)arg2 domain:(id)arg3 ;
-(void)report:(id)arg1 signature:(id)arg2 result:(BOOL)arg3 ;
-(void)setAuthenticateResponseTimestamp:(double)arg1 ;
-(double)authenticateResponseTimestamp;
-(void)reportDurationForEventType:(id)arg1 withStartTimestamp:(double)arg2 ;
-(void)setInviteeUILaunchTimestamp:(double)arg1 ;
-(double)inviteeUILaunchTimestamp;
-(void)setMessageInviteProcessingTimestamp:(double)arg1 ;
-(double)messageInviteProcessingTimestamp;
-(void)setConnectingDevicesTimestamp:(double)arg1 ;
-(double)connectingDevicesTimestamp;
-(void)setProgramaticInviteTimestamp:(double)arg1 ;
-(double)programaticInviteTimestamp;
-(void)setAppLaunchTimestamp:(double)arg1 ;
-(void)setTotalInviteReceivedTimestamp:(double)arg1 ;
-(double)appLaunchTimestamp;
-(double)totalInviteReceivedTimestamp;
-(void)report:(id)arg1 signature:(id)arg2 ;
-(void)reportValue:(long long)arg1 domain:(id)arg2 ;
-(void)recordInviteeUILaunchTimestamp;
-(void)reportInviteeUILaunchDuration;
-(void)recordMessageInviteProcessingTimestamp;
-(void)reportMessageInviteProcessingDuration;
-(void)recordAppLaunchAndTotalTimestamp;
-(void)reportTotalInviteReceivedDuration;
@end

