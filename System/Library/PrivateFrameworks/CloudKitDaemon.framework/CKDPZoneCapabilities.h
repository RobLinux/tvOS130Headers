/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@interface CKDPZoneCapabilities : PBCodable <NSCopying> {

	int _sharingType;
	BOOL _atomicSaves;
	BOOL _ckql;
	BOOL _fetchChanges;
	BOOL _hierarchicalSharing;
	BOOL _sharing;
	BOOL _zoneSharing;
	SCD_Struct_CK25 _has;

}

@property (assign,nonatomic) BOOL hasAtomicSaves; 
@property (assign,nonatomic) BOOL atomicSaves;                         //@synthesize atomicSaves=_atomicSaves - In the implementation block
@property (assign,nonatomic) BOOL hasFetchChanges; 
@property (assign,nonatomic) BOOL fetchChanges;                        //@synthesize fetchChanges=_fetchChanges - In the implementation block
@property (assign,nonatomic) BOOL hasSharing; 
@property (assign,nonatomic) BOOL sharing;                             //@synthesize sharing=_sharing - In the implementation block
@property (assign,nonatomic) BOOL hasCkql; 
@property (assign,nonatomic) BOOL ckql;                                //@synthesize ckql=_ckql - In the implementation block
@property (assign,nonatomic) BOOL hasSharingType; 
@property (assign,nonatomic) int sharingType;                          //@synthesize sharingType=_sharingType - In the implementation block
@property (assign,nonatomic) BOOL hasZoneSharing; 
@property (assign,nonatomic) BOOL zoneSharing;                         //@synthesize zoneSharing=_zoneSharing - In the implementation block
@property (assign,nonatomic) BOOL hasHierarchicalSharing; 
@property (assign,nonatomic) BOOL hierarchicalSharing;                 //@synthesize hierarchicalSharing=_hierarchicalSharing - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAtomicSaves:(BOOL)arg1 ;
-(void)setHasAtomicSaves:(BOOL)arg1 ;
-(BOOL)hasAtomicSaves;
-(void)setFetchChanges:(BOOL)arg1 ;
-(void)setHasFetchChanges:(BOOL)arg1 ;
-(BOOL)hasFetchChanges;
-(void)setSharing:(BOOL)arg1 ;
-(void)setHasSharing:(BOOL)arg1 ;
-(BOOL)hasSharing;
-(void)setCkql:(BOOL)arg1 ;
-(void)setHasCkql:(BOOL)arg1 ;
-(BOOL)hasCkql;
-(int)sharingType;
-(void)setSharingType:(int)arg1 ;
-(void)setHasSharingType:(BOOL)arg1 ;
-(BOOL)hasSharingType;
-(id)sharingTypeAsString:(int)arg1 ;
-(int)StringAsSharingType:(id)arg1 ;
-(void)setZoneSharing:(BOOL)arg1 ;
-(void)setHasZoneSharing:(BOOL)arg1 ;
-(BOOL)hasZoneSharing;
-(void)setHierarchicalSharing:(BOOL)arg1 ;
-(void)setHasHierarchicalSharing:(BOOL)arg1 ;
-(BOOL)hasHierarchicalSharing;
-(BOOL)atomicSaves;
-(BOOL)fetchChanges;
-(BOOL)sharing;
-(BOOL)ckql;
-(BOOL)zoneSharing;
-(BOOL)hierarchicalSharing;
@end

