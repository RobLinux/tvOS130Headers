/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <AdCore/NSCopying.h>

@interface ADFlags : NSObject <NSCopying> {

	unsigned long long _flags;

}

@property (assign) unsigned long long flags;              //@synthesize flags=_flags - In the implementation block
+(id)initWithFlags:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)flags;
-(void)reset;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)set:(unsigned long long)arg1 ;
-(unsigned long long)anySet:(unsigned long long)arg1 ;
-(BOOL)allSet:(unsigned long long)arg1 ;
-(void)unset:(unsigned long long)arg1 ;
-(BOOL)isSet:(unsigned long long)arg1 ;
-(BOOL)noneSet;
@end

