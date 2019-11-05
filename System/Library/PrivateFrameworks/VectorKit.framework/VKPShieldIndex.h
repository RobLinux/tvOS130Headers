/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <VectorKit/NSCopying.h>

@class NSMutableArray;

@interface VKPShieldIndex : PBCodable <NSCopying> {

	NSMutableArray* _entries;
	NSMutableArray* _textEntries;
	NSMutableArray* _variantEntries;

}

@property (nonatomic,retain) NSMutableArray * entries;                     //@synthesize entries=_entries - In the implementation block
@property (nonatomic,retain) NSMutableArray * textEntries;                 //@synthesize textEntries=_textEntries - In the implementation block
@property (nonatomic,retain) NSMutableArray * variantEntries;              //@synthesize variantEntries=_variantEntries - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)entries;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)entriesCount;
-(void)clearEntries;
-(id)entriesAtIndex:(unsigned long long)arg1 ;
-(void)addEntries:(id)arg1 ;
-(void)setEntries:(NSMutableArray *)arg1 ;
-(void)setTextEntries:(NSMutableArray *)arg1 ;
-(void)addTextEntries:(id)arg1 ;
-(unsigned long long)textEntriesCount;
-(void)clearTextEntries;
-(id)textEntriesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)textEntries;
-(void)setVariantEntries:(NSMutableArray *)arg1 ;
-(void)addVariantEntries:(id)arg1 ;
-(unsigned long long)variantEntriesCount;
-(void)clearVariantEntries;
-(id)variantEntriesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)variantEntries;
@end

