/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:45 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <locationd/NSCopying.h>

@class NSString, NSMutableArray;

@interface CLCompanionSyncAuthObject : PBCodable <NSCopying> {

	unsigned long long _applicationDatabaseRevision;
	unsigned _authMask;
	NSString* _clientKey;
	int _notification;
	int _operationType;
	NSMutableArray* _vectorClocks;
	BOOL _clearClient;
	SCD_Struct_AL4 _has;

}

@property (nonatomic,retain) NSString * clientKey;                                        //@synthesize clientKey=_clientKey - In the implementation block
@property (assign,nonatomic) BOOL hasAuthMask; 
@property (assign,nonatomic) unsigned authMask;                                           //@synthesize authMask=_authMask - In the implementation block
@property (assign,nonatomic) BOOL hasClearClient; 
@property (assign,nonatomic) BOOL clearClient;                                            //@synthesize clearClient=_clearClient - In the implementation block
@property (assign,nonatomic) BOOL hasNotification; 
@property (assign,nonatomic) int notification;                                            //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic) int operationType;                                           //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,retain) NSMutableArray * vectorClocks;                               //@synthesize vectorClocks=_vectorClocks - In the implementation block
@property (assign,nonatomic) BOOL hasApplicationDatabaseRevision; 
@property (assign,nonatomic) unsigned long long applicationDatabaseRevision;              //@synthesize applicationDatabaseRevision=_applicationDatabaseRevision - In the implementation block
+(Class)vectorClocksType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)notification;
-(void)setNotification:(int)arg1 ;
-(void)setOperationType:(int)arg1 ;
-(int)operationType;
-(void)setClientKey:(NSString *)arg1 ;
-(NSString *)clientKey;
-(BOOL)hasNotification;
-(id)operationTypeAsString:(int)arg1 ;
-(int)StringAsOperationType:(id)arg1 ;
-(unsigned)authMask;
-(void)setAuthMask:(unsigned)arg1 ;
-(void)setClearClient:(BOOL)arg1 ;
-(void)setApplicationDatabaseRevision:(unsigned long long)arg1 ;
-(BOOL)clearClient;
-(void)setVectorClocks:(NSMutableArray *)arg1 ;
-(void)addVectorClocks:(id)arg1 ;
-(unsigned long long)vectorClocksCount;
-(void)clearVectorClocks;
-(id)vectorClocksAtIndex:(unsigned long long)arg1 ;
-(void)setHasAuthMask:(BOOL)arg1 ;
-(BOOL)hasAuthMask;
-(void)setHasClearClient:(BOOL)arg1 ;
-(BOOL)hasClearClient;
-(void)setHasNotification:(BOOL)arg1 ;
-(id)notificationAsString:(int)arg1 ;
-(int)StringAsNotification:(id)arg1 ;
-(void)setHasApplicationDatabaseRevision:(BOOL)arg1 ;
-(BOOL)hasApplicationDatabaseRevision;
-(NSMutableArray *)vectorClocks;
-(unsigned long long)applicationDatabaseRevision;
@end

