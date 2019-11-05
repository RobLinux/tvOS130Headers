/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:43 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <locationd/NSCopying.h>

@class ALCLMotionActivity;

@interface ALActivityOverrideMsg : PBCodable <NSCopying> {

	ALCLMotionActivity* _activity;
	int _overrideAction;

}

@property (assign,nonatomic) int overrideAction;                         //@synthesize overrideAction=_overrideAction - In the implementation block
@property (nonatomic,retain) ALCLMotionActivity * activity;              //@synthesize activity=_activity - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(ALCLMotionActivity *)activity;
-(void)setActivity:(ALCLMotionActivity *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)overrideActionAsString:(int)arg1 ;
-(int)StringAsOverrideAction:(id)arg1 ;
-(int)overrideAction;
-(void)setOverrideAction:(int)arg1 ;
@end

