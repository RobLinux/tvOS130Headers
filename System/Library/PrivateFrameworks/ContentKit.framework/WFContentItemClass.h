/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFContentItemClass
@optional
+(id)propertyBuilders;
+(id)ownedPasteboardTypes;
+(id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+(id)filterRepresentationsForAllowedContent:(id)arg1;
-(id)preferredFileType;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
-(id)generateFileRepresentationsForType:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
-(id)generateFileRepresentationForType:(id)arg1 error:(id*)arg2;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3;
-(void)generateFileRepresentations:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3;
-(void)getPreferredFileExtension:(/*^block*/id)arg1;
-(void)getPreferredFileSize:(/*^block*/id)arg1;
-(id)additionalRepresentationsForSerialization;
-(void)getFileRepresentationsForSerialization:(/*^block*/id)arg1;
-(BOOL)includesFileRepresentationInSerializedItem;
-(id)internalRepresentationForCopying;
-(id)preferredObjectType;
-(BOOL)canGenerateRepresentationForType:(id)arg1;
-(BOOL)cachesSupportedTypes;

@required
+(id)typeDescription;
+(id)localizedTypeDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)contentCategories;
+(id)localizedPluralTypeDescription;
+(id)filterDescription;
+(id)localizedFilterDescription;
+(id)pluralFilterDescription;
+(id)localizedPluralFilterDescription;

@end

