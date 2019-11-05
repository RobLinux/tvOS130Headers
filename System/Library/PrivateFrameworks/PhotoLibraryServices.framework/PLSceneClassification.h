/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class PLAdditionalAssetAttributes;

@interface PLSceneClassification : PLManagedObject

@property (assign,nonatomic) unsigned sceneIdentifier; 
@property (assign,nonatomic) double confidence; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * assetAttributes; 
+(id)entityName;
+(id)insertIntoPhotoLibrary:(id)arg1 asset:(id)arg2 sceneIdentifier:(int)arg3 confidence:(double)arg4 ;
+(void)batchFetchScenesByAssetObjectIDWithAssetObjectIDs:(id)arg1 library:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)PLJunkSceneClassificationIDForLabel:(id)arg1 ;
-(id)debugLogDescription;
@end

