/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPhotos/TVPhotos-Structs.h>
#import <UIKitCore/UIView.h>

@class MRMarimbaLayer, MPDocument;

@interface TVPMarimbaView : UIView

@property (nonatomic,readonly) MRMarimbaLayer * marimbaLayer; 
@property (nonatomic,readonly) MPDocument * document; 
+(Class)layerClass;
-(id)layer;
-(id)initWithFrame:(CGRect)arg1 ;
-(MPDocument *)document;
-(MRMarimbaLayer *)marimbaLayer;
@end

