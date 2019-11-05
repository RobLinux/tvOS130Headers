/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFFavoriteLocationProvider.h>

@protocol WFFavoriteLocationProviderDelegate;
@class NSString;

@interface WFDefaultFavoritesProvider : NSObject <WFFavoriteLocationProvider> {

	id<WFFavoriteLocationProviderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WFFavoriteLocationProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WFFavoriteLocationProviderDelegate>)delegate;
-(void)setDelegate:(id<WFFavoriteLocationProviderDelegate>)arg1 ;
-(id)locations;
-(void)setLocations:(id)arg1 ;
-(void)addLocation:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 persistence:(id)arg2 ;
-(id)locationFromCity:(id)arg1 ;
-(void)removeLocation:(id)arg1 ;
-(BOOL)canProvideDefaultFavorites;
@end

