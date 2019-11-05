/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <CoreTelephony/NSCopying.h>
#import <CoreTelephony/NSSecureCoding.h>

@class NSString, NSArray;

@interface CTPerAppDataUsage : NSObject <NSCopying, NSSecureCoding> {

	NSString* _displayName;
	NSArray* _used;

}

@property (nonatomic,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSArray * used;                      //@synthesize used=_used - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(NSArray *)used;
-(id)init:(id)arg1 withPeriods:(unsigned long long)arg2 ;
@end

