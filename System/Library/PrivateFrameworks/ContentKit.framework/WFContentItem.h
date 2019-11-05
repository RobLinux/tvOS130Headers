/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <UIKit/UIActivityItemSource.h>
#import <ContentKit/WFContentItemClass.h>
#import <ContentKit/WFCopying.h>
#import <ContentKit/NSSecureCoding.h>

@class NSMutableDictionary, WFType, NSItemProvider, NSExtensionItem, NSString, WFRepresentation, UIImage;

@interface WFContentItem : NSObject <UIActivityItemSource, WFContentItemClass, WFCopying, NSSecureCoding> {

	NSMutableDictionary* _representationsByType;
	NSMutableDictionary* _subItemsByClass;
	WFType* _internalRepresentationType;

}

@property (nonatomic,readonly) NSItemProvider * itemProvider; 
@property (nonatomic,readonly) NSExtensionItem * extensionItem; 
@property (nonatomic,readonly) NSItemProvider * minimalItemProvider; 
@property (nonatomic,readonly) NSExtensionItem * minimalExtensionItem; 
@property (nonatomic,readonly) NSString * richListTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableDictionary * representationsByType;              //@synthesize representationsByType=_representationsByType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subItemsByClass;                    //@synthesize subItemsByClass=_subItemsByClass - In the implementation block
@property (nonatomic,readonly) WFType * internalRepresentationType;                    //@synthesize internalRepresentationType=_internalRepresentationType - In the implementation block
@property (nonatomic,readonly) WFRepresentation * internalRepresentation; 
@property (nonatomic,readonly) UIImage * icon; 
@property (nonatomic,readonly) NSString * name; 
+(BOOL)supportsSecureCoding;
+(id)properties;
+(id)propertyForName:(id)arg1 ;
+(id)allProperties;
+(id)supportedTypes;
+(id)typeDescription;
+(id)localizedTypeDescription;
+(id)outputTypes;
+(id)itemWithFile:(id)arg1 ;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)canLowercaseTypeDescription;
+(id)contentCategories;
+(id)itemWithObject:(id)arg1 ;
+(id)itemWithObject:(id)arg1 named:(id)arg2 ;
+(id)ownedPasteboardTypes;
+(id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 ;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)filterRepresentationsForAllowedContent:(id)arg1 ;
+(id)localizedPluralTypeDescription;
+(id)filterDescription;
+(id)localizedFilterDescription;
+(id)pluralFilterDescription;
+(id)localizedPluralFilterDescription;
+(id)badCoercionErrorForObjectClass:(Class)arg1 ;
+(void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)hasLibrary;
+(BOOL)hasStringOutput;
+(BOOL)isAvailableOnPlatform:(long long)arg1 ;
+(id)badCoercionErrorForType:(id)arg1 ;
+(BOOL)supportedTypesMustBeDeterminedByInstance;
+(id)allSupportedTypes;
+(id)supportedItemClasses;
+(id)allSupportedItemClasses;
+(id)supportedTypesExcludingInstanceSpecificTypes;
+(id)pasteboardValueClasses;
+(id)badCoercionErrorForItemClass:(Class)arg1 ;
+(id)itemWithRepresentation:(id)arg1 ;
+(BOOL)errorIsBadCoercionError:(id)arg1 ;
+(id)itemWithRepresentation:(id)arg1 forType:(id)arg2 ;
+(BOOL)isContentItemSubclass;
+(BOOL)hasFileOutput;
+(void)getContentItemFromSerializedItem:(id)arg1 sourceName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)itemFromSerializedItem:(id)arg1 withItemClass:(Class)arg2 forType:(id)arg3 nameIfKnown:(id)arg4 sourceName:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(id)supportedPropertyForProperty:(id)arg1 ;
+(/*^block*/id)contentPropertySubstitutor;
+(BOOL)contentItems:(id)arg1 haveContentProperties:(id)arg2 ;
+(BOOL)supportedItemClassMustBeDeterminedByInstance:(Class)arg1 ;
+(id)supportedItemClassesExcludingInstanceSpecificTypes;
+(id)badCoercionErrorDefaultResponsibleComponent;
+(id)populateBadCoercionError:(id)arg1 withResponsibleComponent:(id)arg2 ;
+(id)badCoercionErrorWithReasonString:(id)arg1 ;
+(id)badCoercionErrorForTypeDescription:(id)arg1 toTypeDescription:(id)arg2 ;
+(id)badCoercionErrorForItemClasses:(id)arg1 ;
+(id)activityItemClasses;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSItemProvider *)itemProvider;
-(UIImage *)icon;
-(WFRepresentation *)internalRepresentation;
-(id)internalName;
-(id)supportedTypes;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)outputTypes;
-(void)getObjectRepresentation:(/*^block*/id)arg1 forClass:(Class)arg2 ;
-(void)getFileRepresentation:(/*^block*/id)arg1 forType:(id)arg2 ;
-(id)ownedTypes;
-(id)preferredFileType;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)objectForClass:(Class)arg1 ;
-(void)getFileRepresentations:(/*^block*/id)arg1 forType:(id)arg2 ;
-(void)getObjectRepresentations:(/*^block*/id)arg1 forClass:(Class)arg2 ;
-(void)performCoercion:(id)arg1 ;
-(void)getTitle:(/*^block*/id)arg1 ;
-(id)generateFileRepresentationsForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)generateFileRepresentations:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)getPreferredFileExtension:(/*^block*/id)arg1 ;
-(void)getPreferredFileSize:(/*^block*/id)arg1 ;
-(id)additionalRepresentationsForSerialization;
-(void)getFileRepresentationsForSerialization:(/*^block*/id)arg1 ;
-(BOOL)includesFileRepresentationInSerializedItem;
-(id)internalRepresentationForCopying;
-(id)preferredObjectType;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(BOOL)cachesSupportedTypes;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(BOOL)getListThumbnail:(/*^block*/id)arg1 forSize:(CGSize)arg2 ;
-(id)copyWithName:(id)arg1 ;
-(void)prepareForActivityItemPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)hasStringOutput;
-(BOOL)canEncodeWithCoder:(id)arg1 ;
-(NSString *)richListTitle;
-(BOOL)getListAltText:(/*^block*/id)arg1 ;
-(id)objectRepresentationForClass:(Class)arg1 ;
-(void)coerceToItemClass:(Class)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setObjectRepresentations:(id)arg1 forClass:(Class)arg2 ;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)metadataForSerialization;
-(NSItemProvider *)minimalItemProvider;
-(NSExtensionItem *)extensionItem;
-(NSExtensionItem *)minimalExtensionItem;
-(id)itemProviderForTypes:(id)arg1 ;
-(id)extensionItemWithItemProvider:(id)arg1 ;
-(BOOL)canPerformCoercion:(id)arg1 ;
-(BOOL)isCoercibleToItemClass:(Class)arg1 ;
-(BOOL)isCoercibleToItemClasses:(id)arg1 ;
-(void)getSerializedItem:(/*^block*/id)arg1 ;
-(id)intermediaryTypesForCoercionToItemClass:(Class)arg1 ;
-(void)getRepresentationsForType:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_getRepresentationsForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)getRepresentationsForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)getRepresentationsForType:(id)arg1 error:(id*)arg2 ;
-(void)generateRepresentationsForType:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)generateRepresentationsForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateFirstLevelSubItemsForItemClass:(Class)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)generateFirstLevelSubItemsForItemClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateSubItemsForItemClasses:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)generateSubItemsForItemClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)typeForCoercionRequest:(id)arg1 ;
-(BOOL)coercionOptions:(id)arg1 allowCoercionsToType:(id)arg2 ;
-(BOOL)coercionOptions:(id)arg1 allowCoercionsToItemClass:(Class)arg2 ;
-(void)coerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)forceCoerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)itemsByCoercingToItemClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)nativePasteboardTypeForObjectRepresentationOfClass:(Class)arg1 ;
-(id)preferredTypeOfClass:(Class)arg1 ;
-(BOOL)canGenerateIntermediaryRepresentationForItemClass:(Class)arg1 ;
-(id)allSupportedTypes;
-(id)supportedItemClasses;
-(id)allSupportedItemClasses;
-(id)initWithRepresentation:(id)arg1 forType:(id)arg2 ;
-(NSMutableDictionary *)representationsByType;
-(id)representationsForType:(id)arg1 ;
-(id)representationForType:(id)arg1 ;
-(void)setRepresentations:(id)arg1 forType:(id)arg2 ;
-(id)fileRepresentationsForType:(id)arg1 ;
-(id)fileRepresentationForType:(id)arg1 ;
-(void)setFileRepresentations:(id)arg1 forType:(id)arg2 ;
-(id)objectRepresentationsForClass:(Class)arg1 ;
-(id)objectsForClass:(Class)arg1 ;
-(NSMutableDictionary *)subItemsByClass;
-(void)setSubItems:(id)arg1 forClass:(Class)arg2 ;
-(id)subItemsForClass:(Class)arg1 ;
-(id)subItemForClass:(Class)arg1 ;
-(void)setRepresentationsByType:(NSMutableDictionary *)arg1 ;
-(void)setSubItemsByClass:(NSMutableDictionary *)arg1 ;
-(WFType *)internalRepresentationType;
-(void)coerceToItemClasses:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldUseObjectRepresentation;
@end

