/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/MPSectionedIdentifierListIdentifierPair.h>
#import <CoreFoundation/ISStackedCompositorResource.h>
#import <CoreFoundation/INKeyImageProducing.h>
#import <CoreFoundation/INCacheableContainer.h>
#import <CoreFoundation/INJSONSerializable.h>
#import <CoreFoundation/INImageProxyInjecting.h>
#import <CoreFoundation/INCodableAttributeRelationComparing.h>
#import <CoreFoundation/INIntentResolutionResultDataProviding.h>
#import <CoreFoundation/AFSecurityDigestibleChunksProviding.h>
#import <CoreFoundation/CKRecordValue.h>
#import <CoreFoundation/CUByteCodable.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSFastEnumeration.h>

@class NSString, INImage, AXEventPathInfoRepresentation, AXMVisionFeature, NSDictionary;

@interface NSArray : NSObject <MPSectionedIdentifierListIdentifierPair, ISStackedCompositorResource, INKeyImageProducing, INCacheableContainer, INJSONSerializable, INImageProxyInjecting, INCodableAttributeRelationComparing, INIntentResolutionResultDataProviding, AFSecurityDigestibleChunksProviding, CKRecordValue, CUByteCodable, NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * sectionIdentifier; 
@property (nonatomic,readonly) NSString * itemIdentifier; 
@property (nonatomic,readonly) BOOL isQueryResultSetInvalidated; 
@property (readonly) NSArray*<ISScalableCompositorResource> resourceStack; 
@property (nonatomic,readonly) AXEventPathInfoRepresentation * firstPath; 
@property (readonly) INImage * _keyImage; 
@property (nonatomic,readonly) NSArray * axm_featuresSortedByConfidence; 
@property (nonatomic,readonly) AXMVisionFeature * axm_featureWithHighestConfidence; 
@property (nonatomic,readonly) NSDictionary * bw_builtInMicRouteDictionary; 
@property (readonly) unsigned long long count; 
+(id)safari_arrayFromDictionaryOfObjectsByIndex:(id)arg1 ;
+(id)safari_arrayWithPropertyListData:(id)arg1 options:(unsigned long long)arg2 ;
+(void)pk_updateSpecifiers:(id)arg1 withIconsFromCache:(id)arg2 isInterfaceRTL:(BOOL)arg3 ;
+(void)pk_updateSpecifiers:(id)arg1 withIconsFromCache:(id)arg2 ;
+(id)_cn_arrayWithObject:(id)arg1 count:(unsigned long long)arg2 ;
+(id)axArrayWithPossiblyNilArrays:(unsigned long long)arg1 ;
+(id)axArrayByIgnoringNilElementsWithCount:(unsigned long long)arg1 ;
+(id)arrayWithValues:(id)arg1 inBlock:(/*^block*/id)arg2 ;
+(id)if_arrayWithObjectIfNonNil:(id)arg1 ;
+(id)_inf_arrayWithObjectIfNonNil:(id)arg1 ;
+(id)createWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)arrayWithIntersectionOf:(id)arg1 and:(id)arg2 ;
+(id)arrayWithUnionOf:(id)arg1 and:(id)arg2 ;
+(id)array:(id)arg1 withItemsIn:(id)arg2 ;
+(id)ak_arrayWithResponseData:(id)arg1 ;
+(id)ak_arrayWithJSONResponseData:(id)arg1 ;
+(id)bw_selectedInputsArrayForBuiltInMicRouteDictionary:(id)arg1 dataSource:(id)arg2 polarPattern:(unsigned)arg3 ;
+(id)arrayByFilteringLaunchProhibitedAppsFrom:(id)arg1 ;
+(id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2 ;
+(id)arrayWithContentsOfFile:(id)arg1 ;
+(id)arrayWithContentsOfURL:(id)arg1 ;
+(id)arrayWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2 error:(id*)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)array;
+(BOOL)supportsSecureCoding;
+(id)arrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayWithObject:(id)arg1 ;
+(id)newArrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayWithObjects:(id)arg1 ;
+(id)arrayWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)arrayWithArray:(id)arg1 range:(NSRange)arg2 ;
+(id)arrayWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)arrayWithArray:(id)arg1 ;
+(id)arrayWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)arrayWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 ;
+(id)arrayWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)arrayWithSet:(id)arg1 ;
-(id)safari_mapAndFilterObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)safari_mapObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)safari_mapAndFilterObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)safari_reduceObjectsWithInitialValue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)safari_reduceObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)safari_maximumUsingComparator:(/*^block*/id)arg1 ;
-(id)_safari_computeLengthsOfLongestSubsequencesCommonWithArray:(id)arg1 ;
-(id)_safari_generateDiffWithLongestCommonSubsequenceLengths:(id)arg1 array:(id)arg2 indexIntoSelf:(unsigned long long)arg3 indexIntoArray:(unsigned long long)arg4 ;
-(id)safari_flattenedArray;
-(id)safari_numberAtIndex:(unsigned long long)arg1 ;
-(id)safari_stringAtIndex:(unsigned long long)arg1 ;
-(id)safari_URLAtIndex:(unsigned long long)arg1 ;
-(id)safari_dictionaryAtIndex:(unsigned long long)arg1 ;
-(id)safari_arrayAtIndex:(unsigned long long)arg1 ;
-(void)safari_enumerateZippedValuesWithArray:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)safari_setByApplyingBlock:(/*^block*/id)arg1 ;
-(id)safari_orderedSetByApplyingBlock:(/*^block*/id)arg1 ;
-(id)safari_filterObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)safari_minimumUsingComparator:(/*^block*/id)arg1 ;
-(id)safari_diffWithArray:(id)arg1 ;
-(id)safari_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(BOOL)safari_containsObjectPassingTest:(/*^block*/id)arg1 ;
-(id)safari_arrayByAddingObjectsFromArrayIfNotDuplicates:(id)arg1 ;
-(id)fetchedObjects;
-(id)_pl_prettyDescriptionWithIndent:(long long)arg1 ;
-(id)pl_shortDescription;
-(unsigned long long)pl_countOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)pl_indexOfFirstObjectInRange:(NSRange)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)pl_indexOfLastObjectInRange:(NSRange)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)pl_arrayOfUniqueObjectsNotInOrderedSet:(id)arg1 ;
-(unsigned long long)pl_indexOfFirstObjectPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)pl_indexOfLastObjectPassingTest:(/*^block*/id)arg1 ;
-(id)_pl_map:(/*^block*/id)arg1 ;
-(id)_pl_filter:(/*^block*/id)arg1 ;
-(id)_pl_flatMap:(/*^block*/id)arg1 ;
-(id)_pl_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(BOOL)_pl_any:(/*^block*/id)arg1 ;
-(id)_pl_groupBy:(/*^block*/id)arg1 ;
-(id)_pl_indexBy:(/*^block*/id)arg1 ;
-(id)specifierForID:(id)arg1 ;
-(unsigned long long)indexOfSpecifierWithID:(id)arg1 ;
-(id)arrayByPerformingSpecifierUpdatesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)cplDeepCopy;
-(id)MSMutableDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MSDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MSMutableDeepCopy;
-(id)MSDeepCopy;
-(id)MSDSPAssetCollectionWithMasterFileHash:(id)arg1 ;
-(id)abs_arrayByMappingTransform:(/*^block*/id)arg1 ;
-(NSString *)itemIdentifier;
-(NSString *)sectionIdentifier;
-(BOOL)MPIsEmpty;
-(BOOL)isQueryResultSetInvalidated;
-(id)subarraysOfSize:(unsigned long long)arg1 ;
-(id)subarraysOfSize:(unsigned long long)arg1 ;
-(id)tvs_randomizedArray;
-(id)tvs_arrayByMappingObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)tvs_objectsPassingTest:(/*^block*/id)arg1 ;
-(BOOL)tvs_shallowIsEqualToArray:(id)arg1 ;
-(id)_uikit_complayout_NSArrayAdditions_apiRepresentations;
-(id)_ui_onlyObject;
-(id)_ui_firstObject;
-(id)_filteredArrayOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)ui_arrayByRemovingLastObjectEqualTo:(id)arg1 ;
-(CGSize)_legacy_drawComponentsJoinedByString:(id)arg1 atPoint:(CGPoint*)arg2 forWidth:(double)arg3 withFont:(id)arg4 lineBreakMode:(long long)arg5 ;
-(id)_initWithObjectsFromArray:(id)arg1 range:(NSRange)arg2 ;
-(void)_makeObjectsPerformSelector:(SEL)arg1 object:(id)arg2 range:(NSRange)arg3 ;
-(id)ams_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)ams_filterUsingTest:(/*^block*/id)arg1 ;
-(id)ams_invertedDictionaryUsingTransformIgnoresNil:(/*^block*/id)arg1 ;
-(BOOL)ams_allWithTest:(/*^block*/id)arg1 ;
-(BOOL)ams_anyWithTest:(/*^block*/id)arg1 ;
-(id)ams_dictionaryUsingTransform:(/*^block*/id)arg1 ;
-(id)ams_invertedDictionaryUsingTransform:(/*^block*/id)arg1 ;
-(id)ams_mapWithTransformIgnoresNil:(/*^block*/id)arg1 ;
-(id)ams_mapWithTransform:(/*^block*/id)arg1 ;
-(id)ams_nonEmptyComponentsJoinedByString:(id)arg1 ;
-(id)ams_objectAtIndex:(long long)arg1 ;
-(id)aa_mapNullable:(/*^block*/id)arg1 ;
-(id)aa_map:(/*^block*/id)arg1 ;
-(id)aa_arrayByRemovingObject:(id)arg1 ;
-(id)aa_filter:(/*^block*/id)arg1 ;
-(id)aa_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(BOOL)aa_isSubsetOfArray:(id)arg1 ;
-(id)_ss_arrayByRemovingObjectsPassingTest:(/*^block*/id)arg1 ;
-(BOOL)_ss_any:(/*^block*/id)arg1 ;
-(id)_ss_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)_ss_map:(/*^block*/id)arg1 ;
-(id)_ss_filterUsingTest:(/*^block*/id)arg1 ;
-(id)_ss_index:(/*^block*/id)arg1 ;
-(id)_web_lowercaseStrings;
-(NSArray*<ISScalableCompositorResource>)resourceStack;
-(id)DACPLogSubarrayFromIndexToEndOfArray:(unsigned long long)arg1 ;
-(BOOL)DACPLogArrayBeginsWithArray:(id)arg1 ;
-(void)_cn_each:(/*^block*/id)arg1 ;
-(id)_cn_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(void)_cn_each:(/*^block*/id)arg1 until:(/*^block*/id)arg2 ;
-(id)_cn_joinWithBlock:(/*^block*/id)arg1 ;
-(id)_cn_reduce:(/*^block*/id)arg1 initialValue:(id)arg2 ;
-(id)_cn_map:(/*^block*/id)arg1 ;
-(id)_cn_filter:(/*^block*/id)arg1 ;
-(id)_cn_flatten;
-(id)_cn_tail;
-(id)_cn_take:(unsigned long long)arg1 ;
-(void)_cn_zip:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_cn_each:(/*^block*/id)arg1 untilCancelled:(id)arg2 ;
-(void)_cn_each_reverse:(/*^block*/id)arg1 ;
-(id)_cn_join:(id)arg1 ;
-(id)_cn_concurrentMap:(/*^block*/id)arg1 ;
-(id)_cn_compactMap:(/*^block*/id)arg1 ;
-(id)_cn_partition:(/*^block*/id)arg1 ;
-(id)_cn_slicesWithMaximumCount:(unsigned long long)arg1 ;
-(id)_cn_balancedSlicesWithMaximumCount:(unsigned long long)arg1 ;
-(unsigned long long)_cn_indexOfFirstObjectPassingTest:(/*^block*/id)arg1 ;
-(BOOL)_cn_all:(/*^block*/id)arg1 ;
-(BOOL)_cn_any:(/*^block*/id)arg1 ;
-(BOOL)_cn_none:(/*^block*/id)arg1 ;
-(BOOL)_cn_containsObject:(id)arg1 ;
-(id)_cn_indicesForObjects:(id)arg1 ;
-(id)_cn_distinctObjects;
-(id)_cn_flatMap:(/*^block*/id)arg1 ;
-(id)_cn_reduce:(/*^block*/id)arg1 ;
-(id)_cn_skip:(unsigned long long)arg1 ;
-(id)_cn_skipLast:(unsigned long long)arg1 ;
-(id)_cn_sortedArrayUsingAuxiliarySortOrder:(id)arg1 transform:(/*^block*/id)arg2 ;
-(id)_cn_takeLast:(unsigned long long)arg1 ;
-(id)_cn_groupBy:(/*^block*/id)arg1 ;
-(id)_cn_indexBy:(/*^block*/id)arg1 ;
-(id)_cn_zip:(id)arg1 ;
-(id)_cn_reversed;
-(id)_cn_safeSortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(BOOL)_cn_isIdenticalToArray:(id)arg1 ;
-(BOOL)_cn_isNonEmpty;
-(id)_cn_arrayByRotatingRange:(NSRange)arg1 by:(long long)arg2 ;
-(AXEventPathInfoRepresentation *)firstPath;
-(id)axMapObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)axUniqueArrayWithPredicate:(/*^block*/id)arg1 ;
-(BOOL)axIsEqualToOrderedArray:(id)arg1 withPredicate:(/*^block*/id)arg2 ;
-(id)axFilterObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)axSafeObjectAtIndex:(unsigned long long)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(INImage *)_keyImage;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2 ;
-(id)_intents_localizedCopyForLanguage:(id)arg1 ;
-(BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2 ;
-(id)_intents_indexingRepresentation;
-(id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2 error:(id*)arg3 ;
-(id)_JSONDictionaryRepresentationForIntent:(id)arg1 parameterName:(id)arg2 ;
-(AXMVisionFeature *)axm_featureWithHighestConfidence;
-(NSArray *)axm_featuresSortedByConfidence;
-(id)_arrayByFilteringCandidatesForNonExtendedView;
-(id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id*)arg1 ;
-(id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id*)arg1 ;
-(void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)af_arrayByMappingWithBlock:(/*^block*/id)arg1 ;
-(id)_geo_firstPhotoOfAtLeastSize:(CGSize)arg1 ;
-(id)_geo_bestLocalizedString;
-(id)_geo_bestLocalizedStringValue;
-(id)_geo_bestLocalizedStringLocaleValue;
-(id)if_map:(/*^block*/id)arg1 ;
-(id)if_compactMap:(/*^block*/id)arg1 ;
-(id)if_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)if_firstObjectWithValue:(id)arg1 forKey:(id)arg2 ;
-(id)if_firstObjectWithBoolValue:(BOOL)arg1 forKey:(id)arg2 ;
-(id)if_firstObjectWithIntValue:(int)arg1 forKey:(id)arg2 ;
-(id)if_objectsOfClass:(Class)arg1 ;
-(id)if_objectsNotOfClass:(Class)arg1 ;
-(void)if_enumerateAsynchronously:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)if_enumerateAsynchronouslyInSequence:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)if_objectsPassingTest:(/*^block*/id)arg1 ;
-(id)_if_firstObjectMatchingPredicate:(id)arg1 ;
-(id)if_flatMap:(/*^block*/id)arg1 ;
-(void)if_mapAsynchronously:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)if_mapAsynchronouslyOnQueue:(id)arg1 transform:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_inf_flatMap:(/*^block*/id)arg1 ;
-(void)if_flatMapAsynchronously:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)if_flatMapAsynchronouslyOnQueue:(id)arg1 transform:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)if_escapedComponentsJoinedByString:(id)arg1 forLocale:(id)arg2 ;
-(id)if_arrayByRemovingObject:(id)arg1 ;
-(id)if_arrayByRemovingObjectsInArray:(id)arg1 ;
-(id)_inf_objectsPassingTest:(/*^block*/id)arg1 ;
-(id)if_objectsWithValue:(id)arg1 forKey:(id)arg2 ;
-(id)if_objectsWithBoolValue:(BOOL)arg1 forKey:(id)arg2 ;
-(id)if_objectsWithIntValue:(int)arg1 forKey:(id)arg2 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(id)CKComponentsAndSubcomponentsJoinedByString:(id)arg1 ;
-(id)_sa_mappedArrayWithBlock:(/*^block*/id)arg1 ;
-(BOOL)mr_isEqualToOutputDevicesArray:(id)arg1 ;
-(BOOL)mr_containsAnyOf:(id)arg1 ;
-(id)mr_map:(/*^block*/id)arg1 ;
-(id)un_nonEmptyCopy;
-(id)un_safeArrayContainingClass:(Class)arg1 ;
-(id)un_filter:(/*^block*/id)arg1 ;
-(id)un_map:(/*^block*/id)arg1 ;
-(void)un_each:(/*^block*/id)arg1 ;
-(id)un_safeArrayContainingClasses:(id)arg1 ;
-(void)sf_differencesFromArray:(id)arg1 removedIndexes:(id*)arg2 insertedIndexes:(id*)arg3 ;
-(void)sf_differencesFromArray:(id)arg1 usingComparator:(/*^block*/id)arg2 removedIndexes:(id*)arg3 insertedIndexes:(id*)arg4 ;
-(id)_scrambledKeywordsAndAddToSet:(id)arg1 ;
-(id)_nextKeywordUsingCursors:(CFDictionaryRef)arg1 ;
-(id)encodedDataAndReturnError:(id*)arg1 ;
-(const char*)encodedBytesAndReturnLength:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)containsObjectIdenticalTo:(id)arg1 ;
-(id)__imArrayByApplyingBlock:(/*^block*/id)arg1 ;
-(long long)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2 ;
-(BOOL)__imIsMutable;
-(id)__IMStripPotentialTokenURIs;
-(id)__imSetFromArray;
-(id)__imDeepCopy;
-(BOOL)_hasSameMembers:(id)arg1 ;
-(id)_copyForEnumerating;
-(id)__imFirstObject;
-(BOOL)containsObject:(id)arg1 matchingComparison:(SEL)arg2 ;
-(void)__imForEach:(/*^block*/id)arg1 ;
-(id)__imArrayByFilteringWithBlock:(/*^block*/id)arg1 ;
-(id)__imArrayByApplyingBlock:(/*^block*/id)arg1 filter:(/*^block*/id)arg2 ;
-(void)differencesFromArray:(id)arg1 usingComparator:(/*^block*/id)arg2 removedIndexes:(id*)arg3 insertedIndexes:(id*)arg4 ;
-(void)differencesFromArray:(id)arg1 removedIndexes:(id*)arg2 insertedIndexes:(id*)arg3 ;
-(id)exMRL_numberArrayDescription;
-(double)mean;
-(double)standardDeviation;
-(double)standardDeviationWithMean:(double)arg1 ;
-(BOOL)anyItemsIntersectArray:(id)arg1 ;
-(double)cooccurrencesWith:(id)arg1 ;
-(double)correlationWith:(id)arg1 ;
-(id)ak_map:(/*^block*/id)arg1 ;
-(id)ak_firstObjectMatchingFilter:(/*^block*/id)arg1 ;
-(id)ak_mapNullable:(/*^block*/id)arg1 ;
-(id)ak_filter:(/*^block*/id)arg1 ;
-(id)filteredLanguagesBySearchString:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(id)CAMLType;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(id)pickableRouteWithUID:(id)arg1 ;
-(NSDictionary *)bw_builtInMicRouteDictionary;
-(void)bs_each:(/*^block*/id)arg1 ;
-(id)bs_filter:(/*^block*/id)arg1 ;
-(BOOL)bs_containsObjectPassingTest:(/*^block*/id)arg1 ;
-(id)bs_map:(/*^block*/id)arg1 ;
-(id)bs_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)bs_firstObjectOfClass:(Class)arg1 ;
-(id)bs_flatten;
-(id)bs_differenceWithArray:(id)arg1 ;
-(void)bs_enumerateObjectsOfClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)bs_first:(unsigned long long)arg1 ;
-(id)bs_firstObjectOfClassNamed:(id)arg1 ;
-(id)bs_objectsOfClass:(Class)arg1 ;
-(id)bs_reverse;
-(id)bs_mapNoNulls:(/*^block*/id)arg1 ;
-(id)bs_flattenedDifferenceWithArray:(id)arg1 ;
-(id)ac_filter:(/*^block*/id)arg1 ;
-(id)ac_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)ac_map:(/*^block*/id)arg1 ;
-(id)ac_mapNullable:(/*^block*/id)arg1 ;
-(id)sortedPids;
-(id)cutFirstObject;
-(id)ax_filteredArrayUsingBlock:(/*^block*/id)arg1 ;
-(id)ax_mappedArrayUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)ax_containsObjectUsingBlock:(/*^block*/id)arg1 ;
-(id)ax_flatMappedArrayUsingBlock:(/*^block*/id)arg1 ;
-(NSString *)debugDescription;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)sortedArrayUsingDescriptors:(id)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 hint:(id)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)_stringToWrite;
-(id)sortedArrayHint;
-(id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_sumForKeyPath:(id)arg1 ;
-(id)_unionOfArraysForKeyPath:(id)arg1 ;
-(id)_unionOfObjectsForKeyPath:(id)arg1 ;
-(id)_avgForKeyPath:(id)arg1 ;
-(id)_countForKeyPath:(id)arg1 ;
-(id)_maxForKeyPath:(id)arg1 ;
-(id)_minForKeyPath:(id)arg1 ;
-(id)_unionOfSetsForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfArraysForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfObjectsForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfSetsForKeyPath:(id)arg1 ;
-(id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 ;
-(BOOL)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id*)arg4 ;
-(void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5 ;
-(void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 ;
-(id)pathsMatchingExtensions:(id)arg1 ;
-(id)stringsByAppendingPathComponent:(id)arg1 ;
-(id)differenceFromArray:(id)arg1 withOptions:(unsigned long long)arg2 usingEquivalenceTest:(/*^block*/id)arg3 ;
-(id)filteredArrayUsingPredicate:(id)arg1 ;
-(id)differenceFromArray:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(id)differenceFromArray:(id)arg1 ;
-(id)arrayByApplyingDifference:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)initWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(id)objectEnumerator;
-(id)initWithArray:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS13*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(id)initWithOrderedSet:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)firstObject;
-(BOOL)isEqualToArray:(id)arg1 ;
-(id)lastObject;
-(id)objectsAtIndexes:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)sortedArrayFromRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(id)initWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)_initByAdoptingBuffer:(id*)arg1 count:(unsigned long long)arg2 size:(unsigned long long)arg3 ;
-(id)allObjects;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(BOOL)isNSArray__;
-(id)componentsJoinedByString:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 inRange:(NSRange)arg2 ;
-(BOOL)containsObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(BOOL)containsObjectIdenticalTo:(id)arg1 ;
-(unsigned long long)countForObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)firstObjectCommonWithArray:(id)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObject:(id)arg1 ;
-(id)indexesOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObjectIdenticalTo:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(/*^block*/id)arg4 ;
-(unsigned long long)indexOfObjectPassingTest:(/*^block*/id)arg1 ;
-(id)indexesOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectPassingTest:(/*^block*/id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(id)reverseObjectEnumerator;
-(id)reversedArray;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)sortedArrayUsingSelector:(SEL)arg1 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithObjects:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)arrayByAddingObject:(id)arg1 ;
-(id)arrayByAddingObjectsFromArray:(id)arg1 ;
-(id)arrayByApplyingSelector:(SEL)arg1 ;
-(id)arrayByExcludingObjectsInArray:(id)arg1 ;
-(id)arrayByExcludingToObjectsInArray:(id)arg1 ;
@end
