/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <CoreTelephony/NSCopying.h>
#import <CoreTelephony/NSSecureCoding.h>

@class NSNumber;

@interface CTPriVersion : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _majorVersion;
	NSNumber* _minorVersion;
	NSNumber* _releaseVersion;

}

@property (nonatomic,retain) NSNumber * majorVersion;                //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,retain) NSNumber * minorVersion;                //@synthesize minorVersion=_minorVersion - In the implementation block
@property (nonatomic,retain) NSNumber * releaseVersion;              //@synthesize releaseVersion=_releaseVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)majorVersion;
-(NSNumber *)minorVersion;
-(NSNumber *)releaseVersion;
-(void)setMajorVersion:(NSNumber *)arg1 ;
-(void)setMinorVersion:(NSNumber *)arg1 ;
-(void)setReleaseVersion:(NSNumber *)arg1 ;
@end

