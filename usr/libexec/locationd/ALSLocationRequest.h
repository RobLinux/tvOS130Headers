/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:46 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBRequest.h>

@class NSString, NSMutableArray;

@interface ALSLocationRequest : PBRequest {

	NSString* _appBundleId;
	NSMutableArray* _cdmaCellTowers;
	NSMutableArray* _cdmaEvdoTowers;
	NSMutableArray* _cellTowers;
	NSMutableArray* _lteCellTowers;
	int _numberOfSurroundingCdmaCells;
	int _numberOfSurroundingCdmaEvdoCells;
	int _numberOfSurroundingCells;
	int _numberOfSurroundingLteCells;
	int _numberOfSurroundingScdmaCells;
	int _numberOfSurroundingWifis;
	NSMutableArray* _scdmaCellTowers;
	NSMutableArray* _wirelessAPs;
	SCD_Struct_AL155 _has;

}

@property (nonatomic,retain) NSMutableArray * cellTowers;                           //@synthesize cellTowers=_cellTowers - In the implementation block
@property (nonatomic,retain) NSMutableArray * wirelessAPs;                          //@synthesize wirelessAPs=_wirelessAPs - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSurroundingCells; 
@property (assign,nonatomic) int numberOfSurroundingCells;                          //@synthesize numberOfSurroundingCells=_numberOfSurroundingCells - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSurroundingWifis; 
@property (assign,nonatomic) int numberOfSurroundingWifis;                          //@synthesize numberOfSurroundingWifis=_numberOfSurroundingWifis - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;                                //@synthesize appBundleId=_appBundleId - In the implementation block
@property (nonatomic,retain) NSMutableArray * cdmaCellTowers;                       //@synthesize cdmaCellTowers=_cdmaCellTowers - In the implementation block
@property (nonatomic,retain) NSMutableArray * cdmaEvdoTowers;                       //@synthesize cdmaEvdoTowers=_cdmaEvdoTowers - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSurroundingCdmaCells; 
@property (assign,nonatomic) int numberOfSurroundingCdmaCells;                      //@synthesize numberOfSurroundingCdmaCells=_numberOfSurroundingCdmaCells - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSurroundingCdmaEvdoCells; 
@property (assign,nonatomic) int numberOfSurroundingCdmaEvdoCells;                  //@synthesize numberOfSurroundingCdmaEvdoCells=_numberOfSurroundingCdmaEvdoCells - In the implementation block
@property (nonatomic,retain) NSMutableArray * lteCellTowers;                        //@synthesize lteCellTowers=_lteCellTowers - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSurroundingLteCells; 
@property (assign,nonatomic) int numberOfSurroundingLteCells;                       //@synthesize numberOfSurroundingLteCells=_numberOfSurroundingLteCells - In the implementation block
@property (nonatomic,retain) NSMutableArray * scdmaCellTowers;                      //@synthesize scdmaCellTowers=_scdmaCellTowers - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSurroundingScdmaCells; 
@property (assign,nonatomic) int numberOfSurroundingScdmaCells;                     //@synthesize numberOfSurroundingScdmaCells=_numberOfSurroundingScdmaCells - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)copyTo:(id)arg1 ;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(BOOL)hasAppBundleId;
-(void)setCellTowers:(NSMutableArray *)arg1 ;
-(void)setWirelessAPs:(NSMutableArray *)arg1 ;
-(void)setCdmaCellTowers:(NSMutableArray *)arg1 ;
-(void)setCdmaEvdoTowers:(NSMutableArray *)arg1 ;
-(void)setLteCellTowers:(NSMutableArray *)arg1 ;
-(void)setScdmaCellTowers:(NSMutableArray *)arg1 ;
-(void)addCellTower:(id)arg1 ;
-(void)addWirelessAP:(id)arg1 ;
-(void)addCdmaCellTower:(id)arg1 ;
-(void)addCdmaEvdoTower:(id)arg1 ;
-(void)addLteCellTower:(id)arg1 ;
-(void)addScdmaCellTower:(id)arg1 ;
-(unsigned long long)cellTowersCount;
-(void)clearCellTowers;
-(id)cellTowerAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)wirelessAPsCount;
-(void)clearWirelessAPs;
-(id)wirelessAPAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasNumberOfSurroundingCells;
-(int)numberOfSurroundingCells;
-(void)setNumberOfSurroundingCells:(int)arg1 ;
-(unsigned long long)cdmaCellTowersCount;
-(void)clearCdmaCellTowers;
-(id)cdmaCellTowerAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cdmaEvdoTowersCount;
-(void)clearCdmaEvdoTowers;
-(id)cdmaEvdoTowerAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasNumberOfSurroundingCdmaCells;
-(int)numberOfSurroundingCdmaCells;
-(void)setNumberOfSurroundingCdmaCells:(int)arg1 ;
-(BOOL)hasNumberOfSurroundingCdmaEvdoCells;
-(int)numberOfSurroundingCdmaEvdoCells;
-(void)setNumberOfSurroundingCdmaEvdoCells:(int)arg1 ;
-(unsigned long long)lteCellTowersCount;
-(void)clearLteCellTowers;
-(id)lteCellTowerAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasNumberOfSurroundingLteCells;
-(int)numberOfSurroundingLteCells;
-(void)setNumberOfSurroundingLteCells:(int)arg1 ;
-(unsigned long long)scdmaCellTowersCount;
-(void)clearScdmaCellTowers;
-(id)scdmaCellTowerAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasNumberOfSurroundingScdmaCells;
-(int)numberOfSurroundingScdmaCells;
-(void)setNumberOfSurroundingScdmaCells:(int)arg1 ;
-(void)setHasNumberOfSurroundingCells:(BOOL)arg1 ;
-(void)setHasNumberOfSurroundingCdmaCells:(BOOL)arg1 ;
-(void)setHasNumberOfSurroundingCdmaEvdoCells:(BOOL)arg1 ;
-(void)setHasNumberOfSurroundingLteCells:(BOOL)arg1 ;
-(void)setHasNumberOfSurroundingScdmaCells:(BOOL)arg1 ;
-(NSMutableArray *)cellTowers;
-(NSMutableArray *)wirelessAPs;
-(NSMutableArray *)cdmaCellTowers;
-(NSMutableArray *)cdmaEvdoTowers;
-(NSMutableArray *)lteCellTowers;
-(NSMutableArray *)scdmaCellTowers;
-(BOOL)hasNumberOfSurroundingWifis;
-(int)numberOfSurroundingWifis;
-(void)setNumberOfSurroundingWifis:(int)arg1 ;
-(void)setHasNumberOfSurroundingWifis:(BOOL)arg1 ;
@end
