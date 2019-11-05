/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBSetMessageAttributeIntent.h>
@class NSArray, _INPBIntentMetadata;


@protocol _INPBSetMessageAttributeIntent <NSObject>
@property (assign,nonatomic) int attribute; 
@property (assign,nonatomic) BOOL hasAttribute; 
@property (nonatomic,copy) NSArray * identifiers; 
@property (nonatomic,readonly) unsigned long long identifiersCount; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@required
-(int)attribute;
-(NSArray *)identifiers;
-(unsigned long long)identifiersCount;
-(void)clearIdentifiers;
-(id)identifierAtIndex:(unsigned long long)arg1;
-(void)addIdentifier:(id)arg1;
-(void)setIdentifiers:(id)arg1;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(void)setAttribute:(int)arg1;
-(id)attributeAsString:(int)arg1;
-(int)StringAsAttribute:(id)arg1;
-(BOOL)hasAttribute;
-(void)setHasAttribute:(BOOL)arg1;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSArray, _INPBIntentMetadata, NSString;

@interface _INPBSetMessageAttributeIntent : PBCodable <_INPBSetMessageAttributeIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	int _attribute;
	NSArray* _identifiers;
	_INPBIntentMetadata* _intentMetadata;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int attribute;                                                              //@synthesize attribute=_attribute - In the implementation block
@property (assign,nonatomic) BOOL hasAttribute; 
@property (nonatomic,copy) NSArray * identifiers;                                                        //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long identifiersCount; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)attribute;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSArray *)identifiers;
-(unsigned long long)identifiersCount;
-(void)clearIdentifiers;
-(id)identifierAtIndex:(unsigned long long)arg1 ;
-(void)addIdentifier:(id)arg1 ;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(void)setAttribute:(int)arg1 ;
-(id)attributeAsString:(int)arg1 ;
-(int)StringAsAttribute:(id)arg1 ;
-(BOOL)hasAttribute;
-(void)setHasAttribute:(BOOL)arg1 ;
@end
