/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MKURLHandlerDelegate;
@interface _MKURLHandler : NSObject {

	id<_MKURLHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_MKURLHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(unsigned char)_MKGetURLSchemeTypeFor:(id)arg1 ;
+(BOOL)canHandleURL:(id)arg1 ;
-(id<_MKURLHandlerDelegate>)delegate;
-(void)setDelegate:(id<_MKURLHandlerDelegate>)arg1 ;
-(BOOL)_handleMapsURL:(id)arg1 sourceApplication:(id)arg2 context:(id)arg3 ;
-(BOOL)_handleSharedMapURL:(id)arg1 sourceApplication:(id)arg2 context:(id)arg3 ;
-(BOOL)_handleMapItemURL:(id)arg1 sourceApplication:(id)arg2 context:(id)arg3 ;
-(BOOL)_handleMapItemHandlesURL:(id)arg1 sourceApplication:(id)arg2 context:(id)arg3 ;
-(BOOL)_treatRegionFrom:(id)arg1 ;
-(BOOL)_treatSearchRegionFrom:(id)arg1 ;
-(void)_treatMapTypeFrom:(id)arg1 ;
-(void)_treatTrackingModeFrom:(id)arg1 ;
-(BOOL)_treatContentProvider:(id)arg1 ;
-(void)_treatGenericOptionsFrom:(id)arg1 ;
-(BOOL)_treatCollectionFrom:(id)arg1 ;
-(BOOL)_treatFavoritesFrom:(id)arg1 ;
-(BOOL)_treatTransitLineFrom:(id)arg1 ;
-(BOOL)_treatPinPositionFrom:(id)arg1 ;
-(BOOL)_treatNavigationDirectionsFrom:(id)arg1 ;
-(BOOL)_treatSearchFrom:(id)arg1 ;
-(BOOL)_treatTesterFrom:(id)arg1 ;
-(BOOL)_treatCarDestinationsFrom:(id)arg1 ;
-(BOOL)_handleMapItems:(id)arg1 withOptions:(id)arg2 url:(id)arg3 sourceApplication:(id)arg4 context:(id)arg5 ;
-(void)adjustOptionsForRAP:(id)arg1 options:(id*)arg2 ;
-(BOOL)handleURL:(id)arg1 sourceApplication:(id)arg2 context:(id)arg3 ;
@end

