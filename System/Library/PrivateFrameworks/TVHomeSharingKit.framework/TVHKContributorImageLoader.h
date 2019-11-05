/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/TVHKImageLoader.h>
#import <TVHomeSharingKit/TVHKContributorImageLoadOperationDelegate.h>

@class NSMutableDictionary, NSOperationQueue, NSString;

@interface TVHKContributorImageLoader : TVHKImageLoader <TVHKContributorImageLoadOperationDelegate> {

	NSMutableDictionary* _templateImageURLStringByContributorName;
	NSMutableDictionary* _videoCreditsContextByIdentifier;
	NSMutableDictionary* _processedMediaItemIdentifiers;
	NSOperationQueue* _videoCreditsOperationQueue;

}

@property (nonatomic,retain) NSMutableDictionary * templateImageURLStringByContributorName;              //@synthesize templateImageURLStringByContributorName=_templateImageURLStringByContributorName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * videoCreditsContextByIdentifier;                      //@synthesize videoCreditsContextByIdentifier=_videoCreditsContextByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * processedMediaItemIdentifiers;                        //@synthesize processedMediaItemIdentifiers=_processedMediaItemIdentifiers - In the implementation block
@property (nonatomic,retain) NSOperationQueue * videoCreditsOperationQueue;                              //@synthesize videoCreditsOperationQueue=_videoCreditsOperationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_mediaItemIdentifierForContributorImageLoadParams:(id)arg1 ;
-(id)init;
-(id)_imageLoaderIdentifier;
-(id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(void)setTemplateImageURLStringByContributorName:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)templateImageURLStringByContributorName;
-(void)operation:(id)arg1 templateImageURLStringForParams:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_cancelAllImageLoads;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg1 ;
-(NSOperationQueue *)videoCreditsOperationQueue;
-(NSMutableDictionary *)processedMediaItemIdentifiers;
-(NSMutableDictionary *)videoCreditsContextByIdentifier;
-(void)_updateTemplateImageURLStrings:(id)arg1 ;
-(void)_completeTemplateImageURLStringRequest:(id)arg1 templateImageURLStrings:(id)arg2 error:(id)arg3 ;
-(void)setVideoCreditsContextByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setProcessedMediaItemIdentifiers:(NSMutableDictionary *)arg1 ;
-(void)setVideoCreditsOperationQueue:(NSOperationQueue *)arg1 ;
@end

