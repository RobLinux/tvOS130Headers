/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOResourceManifestServerProxyDelegate <NSObject>
@required
-(oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1;
-(oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1;
-(oneway void)serverProxyWillStartLoadingResources:(id)arg1;
-(oneway void)serverProxyDidStopLoadingResources:(id)arg1;
-(oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(/*^block*/id)arg3;
-(void)serverProxyNeedsWiFiResourceActivity:(id)arg1;

@end

