/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLResourceGenerator : NSObject
+(void)_continueGeneratingResourcesForAsset:(id)arg1 versions:(id)arg2 conversionClient:(id)arg3 remainingRecipes:(id)arg4 storedRecipes:(id)arg5 attemptedRecipes:(id)arg6 errorsEncountered:(id)arg7 progress:(id)arg8 completion:(/*^block*/id)arg9 ;
+(id)fileAndTableBackedThumbnailManagerRecipesForLibraryID:(id)arg1 ;
+(id)expectedLocalResourceRecipesForAssetWithLibraryID:(id)arg1 versions:(id)arg2 assetHasAdjustments:(BOOL)arg3 assetIsRAWOrRawPlugJPEGWithRawOnTop:(BOOL)arg4 assetWidth:(long long)arg5 assetHeight:(long long)arg6 assetKind:(short)arg7 assetkindSubtype:(short)arg8 ;
+(id)expectedLocalResourceRecipesForAsset:(id)arg1 versions:(id)arg2 ;
+(id)locallyUnavailableRecipesFromRecipes:(id)arg1 versions:(id)arg2 asset:(id)arg3 ;
+(id)generateAndStoreMissingExpectedLocalResourcesForAsset:(id)arg1 versions:(id)arg2 conversionClient:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

