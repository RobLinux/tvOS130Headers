/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/NSProgressReporting.h>

@protocol PHAssetExportRequestDelegate;
@class NSProgress, NSURL, PHAsset, NSDictionary, NSString;

@interface PHAssetExportRequest : NSObject <NSProgressReporting> {

	NSURL* _outputDirectory;
	PHAsset* _asset;
	NSProgress* _progress;
	unsigned long long _state;
	id<PHAssetExportRequestDelegate> _delegate;
	NSDictionary* _variants;

}

@property (nonatomic,readonly) PHAsset * asset;                                             //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                                       //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<PHAssetExportRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * variants;                                     //@synthesize variants=_variants - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportRequestForAsset:(id)arg1 error:(id*)arg2 ;
+(id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id*)arg3 ;
+(id)assetExportLog;
-(NSString *)description;
-(id)init;
-(id<PHAssetExportRequestDelegate>)delegate;
-(void)setDelegate:(id<PHAssetExportRequestDelegate>)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSProgress *)progress;
-(PHAsset *)asset;
-(NSDictionary *)variants;
-(id)outputDirectory;
-(id)initWithAsset:(id)arg1 variants:(id)arg2 ;
-(void)performCompletionWithFileURLs:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)preflightExportWithOptions:(id)arg1 isDownloadingRequired:(BOOL*)arg2 isProcessingRequired:(BOOL*)arg3 fileURLs:(id*)arg4 info:(id*)arg5 ;
-(void)exportWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

