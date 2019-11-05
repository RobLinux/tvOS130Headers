/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NSCopying.h>

@interface NEIKEv2DHProtocol : NSObject <NSCopying> {

	unsigned long long _group;

}

@property (assign) unsigned long long group;              //@synthesize group=_group - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setGroup:(unsigned long long)arg1 ;
-(id)initWithGroup:(unsigned long long)arg1 ;
-(unsigned long long)group;
@end

