/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibrary/AssetsLibrary-Structs.h>
@class ALAssetPrivate;

@interface ALAsset : NSObject {

	id _internal;

}

@property (nonatomic,retain) ALAssetPrivate * internal;                      //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) ALAsset * originalAsset; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
+(CGSize)largePreviewImageSizeForSize:(CGSize)arg1 ;
-(id)description;
-(void)dealloc;
-(BOOL)isValid;
-(id)_uuid;
-(id)valueForProperty:(id)arg1 ;
-(CGImageRef)thumbnail;
-(ALAssetPrivate *)internal;
-(BOOL)isEditable;
-(void)setInternal:(ALAssetPrivate *)arg1 ;
-(BOOL)isDeletable;
-(ALAsset *)originalAsset;
-(id)initWithManagedAsset:(id)arg1 library:(id)arg2 ;
-(id)_typeAsString;
-(id)defaultRepresentation;
-(id)representationForUTI:(id)arg1 ;
-(CGImageRef)aspectRatioThumbnail;
-(void)writeModifiedImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)writeModifiedVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_newContentEditingOutputWithType:(long long)arg1 ;
-(void)setImageData:(id)arg1 metadata:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setVideoAtPath:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)requestDefaultRepresentation;
@end

