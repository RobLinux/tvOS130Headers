/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/NSCopying.h>
#import <DoNotDisturbServer/NSSecureCoding.h>

@class NSArray;

@interface DNDSLegacyBehaviorOverride : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _overrideType;
	unsigned long long _mode;
	NSArray* _effectiveIntervals;

}

@property (nonatomic,readonly) unsigned long long overrideType;                //@synthesize overrideType=_overrideType - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * effectiveIntervals;              //@synthesize effectiveIntervals=_effectiveIntervals - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)mode;
-(unsigned long long)overrideType;
-(id)initWithOverrideType:(unsigned long long)arg1 mode:(unsigned long long)arg2 effectiveIntervals:(id)arg3 ;
-(NSArray *)effectiveIntervals;
@end

