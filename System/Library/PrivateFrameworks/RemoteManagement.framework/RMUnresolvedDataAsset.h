/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMUnresolvedAsset.h>

@class NSString, RMAsset;

@interface RMUnresolvedDataAsset : NSObject <RMUnresolvedAsset> {

	RMAsset* _asset;

}

@property (nonatomic,retain) RMAsset * asset;                           //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
-(NSString *)identifier;
-(RMAsset *)asset;
-(id)initWithAsset:(id)arg1 ;
-(void)setAsset:(RMAsset *)arg1 ;
-(void)resolveWithAssetResolver:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

