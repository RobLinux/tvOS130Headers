/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTEventHandlers.h>

@class MTBaseEventDataProvider, MTMediaActivityEventHandler;

@interface MTVPAFEventHandlers : MTEventHandlers {

	MTBaseEventDataProvider* _base;
	MTMediaActivityEventHandler* _playStart;
	MTMediaActivityEventHandler* _playStop;
	MTMediaActivityEventHandler* _seekStart;
	MTMediaActivityEventHandler* _seekStop;

}

@property (nonatomic,readonly) MTMediaActivityEventHandler * playStart;              //@synthesize playStart=_playStart - In the implementation block
@property (nonatomic,readonly) MTMediaActivityEventHandler * playStop;               //@synthesize playStop=_playStop - In the implementation block
@property (nonatomic,readonly) MTMediaActivityEventHandler * seekStart;              //@synthesize seekStart=_seekStart - In the implementation block
@property (nonatomic,readonly) MTMediaActivityEventHandler * seekStop;               //@synthesize seekStop=_seekStop - In the implementation block
-(void)setBase:(id)arg1 ;
-(id)base;
-(MTMediaActivityEventHandler *)playStart;
-(MTMediaActivityEventHandler *)playStop;
-(MTMediaActivityEventHandler *)seekStart;
-(MTMediaActivityEventHandler *)seekStop;
@end
