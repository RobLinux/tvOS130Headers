/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:30:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Support/ckdiscretionaryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKDiscretionarySchedulerTask : NSObject {

	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(id)init;
-(unsigned long long)state;
-(void)cancel;
-(void)setState:(unsigned long long)arg1 ;
-(void)finish;
@end

