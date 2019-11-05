/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <ScreenTimeCore/NSCopying.h>

@class NSString;

@interface RMRemoteManagementScreenTimeViewUsage : PBCodable <NSCopying> {

	unsigned long long _daysSinceLastView;
	unsigned long long _timestamp;
	NSString* _familyMemberType;
	BOOL _hasPasscode;
	BOOL _isManaged;
	BOOL _remoteUser;
	SCD_Struct_RM7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasFamilyMemberType; 
@property (nonatomic,retain) NSString * familyMemberType;                       //@synthesize familyMemberType=_familyMemberType - In the implementation block
@property (assign,nonatomic) BOOL hasIsManaged; 
@property (assign,nonatomic) BOOL isManaged;                                    //@synthesize isManaged=_isManaged - In the implementation block
@property (assign,nonatomic) BOOL hasHasPasscode; 
@property (assign,nonatomic) BOOL hasPasscode;                                  //@synthesize hasPasscode=_hasPasscode - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteUser; 
@property (assign,nonatomic) BOOL remoteUser;                                   //@synthesize remoteUser=_remoteUser - In the implementation block
@property (assign,nonatomic) BOOL hasDaysSinceLastView; 
@property (assign,nonatomic) unsigned long long daysSinceLastView;              //@synthesize daysSinceLastView=_daysSinceLastView - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)isManaged;
-(void)setIsManaged:(BOOL)arg1 ;
-(void)setFamilyMemberType:(NSString *)arg1 ;
-(BOOL)hasFamilyMemberType;
-(void)setHasIsManaged:(BOOL)arg1 ;
-(BOOL)hasIsManaged;
-(void)setHasPasscode:(BOOL)arg1 ;
-(void)setHasHasPasscode:(BOOL)arg1 ;
-(BOOL)hasHasPasscode;
-(NSString *)familyMemberType;
-(BOOL)hasPasscode;
-(void)setRemoteUser:(BOOL)arg1 ;
-(void)setHasRemoteUser:(BOOL)arg1 ;
-(BOOL)hasRemoteUser;
-(void)setDaysSinceLastView:(unsigned long long)arg1 ;
-(void)setHasDaysSinceLastView:(BOOL)arg1 ;
-(BOOL)hasDaysSinceLastView;
-(BOOL)remoteUser;
-(unsigned long long)daysSinceLastView;
@end

