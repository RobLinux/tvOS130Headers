/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class HMHome;

@interface HFPresenceEventFormatter : NSFormatter {

	unsigned long long _nameType;
	unsigned long long _style;
	HMHome* _home;

}

@property (assign,nonatomic) unsigned long long nameType;              //@synthesize nameType=_nameType - In the implementation block
@property (assign,nonatomic) unsigned long long style;                 //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) HMHome * home;                            //@synthesize home=_home - In the implementation block
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(unsigned long long)nameType;
-(void)setNameType:(unsigned long long)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)stringForPresenceEventBuilder:(id)arg1 ;
-(id)_formattedListForSelectedUsers:(id)arg1 inHome:(id)arg2 ;
-(id)stringForPresenceEvent:(id)arg1 ;
@end

