/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/NSSecureCoding.h>

@class NSDate, TVRCButton;

@interface TVRCButtonEvent : NSObject <NSSecureCoding> {

	NSDate* _timestamp;
	TVRCButton* _button;
	long long _eventType;

}

@property (nonatomic,copy,readonly) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) TVRCButton * button;                  //@synthesize button=_button - In the implementation block
@property (nonatomic,readonly) long long eventType;                  //@synthesize eventType=_eventType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)buttonEventForButton:(id)arg1 eventType:(long long)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSDate *)timestamp;
-(long long)eventType;
-(TVRCButton *)button;
@end
