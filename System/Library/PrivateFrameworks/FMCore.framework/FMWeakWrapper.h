/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCore/FMCore-Structs.h>
#import <FMCore/NSCopying.h>

@interface FMWeakWrapper : NSObject <NSCopying> {

	id _object;
	unsigned long long _objectHash;

}

@property (assign,nonatomic,__weak) id object;                           //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) unsigned long long objectHash;              //@synthesize objectHash=_objectHash - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(unsigned long long)objectHash;
-(void)setObjectHash:(unsigned long long)arg1 ;
@end

