/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHSDMAPEntity.h>

@class NSDictionary, NSMutableDictionary, TVHSDMAPEntity, NSString;

@interface TVHSDMAPChangeTrackingEntity : NSObject <TVHSDMAPEntity> {

	NSMutableDictionary* _mutatedAttributeValues;
	TVHSDMAPEntity* _entity;

}

@property (nonatomic,retain) NSMutableDictionary * mutatedAttributeValues;               //@synthesize mutatedAttributeValues=_mutatedAttributeValues - In the implementation block
@property (nonatomic,retain) TVHSDMAPEntity * entity;                                    //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,copy,readonly) NSDictionary * changedAttributeValues; 
@property (nonatomic,copy,readonly) NSDictionary * commitedAttributeValues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long protocol; 
@property (nonatomic,copy,readonly) NSDictionary * attributeValues; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(unsigned long long)type;
-(unsigned long long)protocol;
-(BOOL)hasChanges;
-(TVHSDMAPEntity *)entity;
-(void)setEntity:(TVHSDMAPEntity *)arg1 ;
-(NSDictionary *)attributeValues;
-(id)initWithEntity:(id)arg1 ;
-(id)attributeValueForCode:(id)arg1 ;
-(NSDictionary *)changedAttributeValues;
-(void)commitChanges;
-(void)setAttributeValue:(id)arg1 forCode:(id)arg2 ;
-(void)prepopulateAttributeValues;
-(NSMutableDictionary *)mutatedAttributeValues;
-(NSDictionary *)commitedAttributeValues;
-(id)_mutableAttributeValuesData;
-(void)setMutatedAttributeValues:(NSMutableDictionary *)arg1 ;
@end

