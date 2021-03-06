/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/NSCopying.h>
#import <iTunesCloud/NSMutableCopying.h>

@class NSMutableDictionary;

@interface ICNetworkConstraints : NSObject <NSCopying, NSMutableCopying> {

	BOOL _dataAllowedFallbackValue;
	BOOL _cellularDataAllowedFallbackValue;
	BOOL _wiFiDataAllowedFallbackValue;
	NSMutableDictionary* _networkTypeToDataAllowed;
	NSMutableDictionary* _networkTypeToSizeLimit;

}
+(id)mediaTypeNetworkConstraintsFromURLBag:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)sizeLimitForNetworkType:(long long)arg1 ;
-(id)_copyWithClass:(Class)arg1 zone:(NSZone*)arg2 ;
-(BOOL)shouldAllowDataForNetworkType:(long long)arg1 ;
-(BOOL)shouldAllowDataForCellularNetworkTypes;
-(BOOL)shouldAllowDataForWiFiNetworkTypes;
@end

