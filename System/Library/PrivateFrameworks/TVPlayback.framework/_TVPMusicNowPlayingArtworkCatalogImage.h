/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <TVPlayback/TVPMusicNowPlayingImage.h>

@class MPArtworkCatalog, UIImage, NSString;

@interface _TVPMusicNowPlayingArtworkCatalogImage : NSObject <TVPMusicNowPlayingImage> {

	BOOL _loading;
	MPArtworkCatalog* _artworkCatalog;
	UIImage* _image;

}

@property (nonatomic,readonly) MPArtworkCatalog * artworkCatalog;              //@synthesize artworkCatalog=_artworkCatalog - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                    //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize desiredImageSize; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(BOOL)isLoading;
-(void)setLoading:(BOOL)arg1 ;
-(CGSize)desiredImageSize;
-(MPArtworkCatalog *)artworkCatalog;
-(id)initWithArtworkCatalog:(id)arg1 ;
-(void)loadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDesiredImageSize:(CGSize)arg1 ;
@end

