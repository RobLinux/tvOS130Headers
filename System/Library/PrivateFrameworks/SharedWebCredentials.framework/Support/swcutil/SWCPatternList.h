/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/Support/swcutil
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <swcutil/swcutil-Structs.h>
#import <swcutil/SWCRedactedDescription.h>
#import <swcutil/NSCopying.h>
#import <swcutil/NSSecureCoding.h>

@interface SWCPatternList : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding>

@property (readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
+(id)patternListWithArray:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(unsigned long long)count;
-(id)redactedDescription;
-(const SWCPatternStorageRef)storage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)enumerateStorageWithBlock:(/*^block*/id)arg1 ;
-(void)enumeratePatternsWithBlock:(/*^block*/id)arg1 ;
-(id)_descriptionDebug:(BOOL)arg1 redacted:(BOOL)arg2 ;
@end

