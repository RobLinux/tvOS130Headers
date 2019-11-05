/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <HomeKitDaemon/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitMultiUserSettings : PBCodable <NSCopying> {

	NSMutableArray* _homeKitMultiUserSettingsValuesByKeyPaths;
	BOOL _isOwner;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasIsOwner; 
@property (assign,nonatomic) BOOL isOwner;                                                           //@synthesize isOwner=_isOwner - In the implementation block
@property (nonatomic,retain) NSMutableArray * homeKitMultiUserSettingsValuesByKeyPaths;              //@synthesize homeKitMultiUserSettingsValuesByKeyPaths=_homeKitMultiUserSettingsValuesByKeyPaths - In the implementation block
+(Class)homeKitMultiUserSettingsValuesByKeyPathType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isOwner;
-(void)setIsOwner:(BOOL)arg1 ;
-(void)setHomeKitMultiUserSettingsValuesByKeyPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)homeKitMultiUserSettingsValuesByKeyPaths;
-(void)setHasIsOwner:(BOOL)arg1 ;
-(BOOL)hasIsOwner;
-(void)addHomeKitMultiUserSettingsValuesByKeyPath:(id)arg1 ;
-(unsigned long long)homeKitMultiUserSettingsValuesByKeyPathsCount;
-(void)clearHomeKitMultiUserSettingsValuesByKeyPaths;
-(id)homeKitMultiUserSettingsValuesByKeyPathAtIndex:(unsigned long long)arg1 ;
@end

