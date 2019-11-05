/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/NSSecureCoding.h>
#import <CoreRC/NSCopying.h>

@interface CoreIRButton : NSObject <NSSecureCoding, NSCopying> {

	unsigned _usagePage;
	unsigned _usageID;

}

@property (nonatomic,readonly) unsigned usagePage;              //@synthesize usagePage=_usagePage - In the implementation block
@property (nonatomic,readonly) unsigned usageID;                //@synthesize usageID=_usageID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)usagePage;
-(unsigned)usageID;
-(id)initWithUsagePage:(unsigned)arg1 usageID:(unsigned)arg2 ;
@end
