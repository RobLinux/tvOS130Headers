/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVVCConfigureAlertBehaviorSettings : NSObject {

	unsigned long long _streamID;
	long long _startAlert;
	long long _stopAlert;
	long long _stopOnErrorAlert;

}

@property (assign,nonatomic) unsigned long long streamID;              //@synthesize streamID=_streamID - In the implementation block
@property (assign,nonatomic) long long startAlert;                     //@synthesize startAlert=_startAlert - In the implementation block
@property (assign,nonatomic) long long stopAlert;                      //@synthesize stopAlert=_stopAlert - In the implementation block
@property (assign,nonatomic) long long stopOnErrorAlert;               //@synthesize stopOnErrorAlert=_stopOnErrorAlert - In the implementation block
-(long long)stopOnErrorAlert;
-(long long)stopAlert;
-(long long)startAlert;
-(unsigned long long)streamID;
-(void)setStreamID:(unsigned long long)arg1 ;
-(id)initWithStreamID:(unsigned long long)arg1 ;
-(void)setStartAlert:(long long)arg1 ;
-(void)setStopAlert:(long long)arg1 ;
-(void)setStopOnErrorAlert:(long long)arg1 ;
@end

