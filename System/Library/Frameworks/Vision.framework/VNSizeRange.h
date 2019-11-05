/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/NSCopying.h>
#import <Vision/NSSecureCoding.h>

@interface VNSizeRange : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _minimumDimension;
	unsigned long long _maximumDimension;
	unsigned long long _idealDimension;

}

@property (nonatomic,readonly) unsigned long long minimumDimension;              //@synthesize minimumDimension=_minimumDimension - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumDimension;              //@synthesize maximumDimension=_maximumDimension - In the implementation block
@property (nonatomic,readonly) unsigned long long idealDimension;                //@synthesize idealDimension=_idealDimension - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMinimumDimension:(unsigned long long)arg1 maximumDimension:(unsigned long long)arg2 idealDimension:(unsigned long long)arg3 ;
-(BOOL)isAllowedDimension:(unsigned long long)arg1 ;
-(unsigned long long)minimumDimension;
-(unsigned long long)maximumDimension;
-(unsigned long long)idealDimension;
@end

