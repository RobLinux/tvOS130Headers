/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface LOGMSGEVENTLogMsgEventTableBookedSession : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	NSString* _bookedTableSessionId;
	NSMutableArray* _bookedTables;
	struct {
		unsigned read_bookedTableSessionId : 1;
		unsigned read_bookedTables : 1;
		unsigned wrote_bookedTableSessionId : 1;
		unsigned wrote_bookedTables : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasBookedTableSessionId; 
@property (nonatomic,retain) NSString * bookedTableSessionId; 
@property (nonatomic,retain) NSMutableArray * bookedTables; 
+(BOOL)isValid:(id)arg1 ;
+(Class)bookedTableType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readBookedTableSessionId;
-(void)_readBookedTables;
-(void)_addNoFlagsBookedTable:(id)arg1 ;
-(NSString *)bookedTableSessionId;
-(void)setBookedTableSessionId:(NSString *)arg1 ;
-(unsigned long long)bookedTablesCount;
-(void)clearBookedTables;
-(id)bookedTableAtIndex:(unsigned long long)arg1 ;
-(void)addBookedTable:(id)arg1 ;
-(BOOL)hasBookedTableSessionId;
-(NSMutableArray *)bookedTables;
-(void)setBookedTables:(NSMutableArray *)arg1 ;
@end

