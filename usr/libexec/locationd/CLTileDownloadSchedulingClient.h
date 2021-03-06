/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:47 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/CLIntersiloProxyDelegateProtocol.h>
#import <locationd/CLTileDownloadSchedulingClientProtocol.h>

@protocol CLTileDownloadSchedulingServiceProtocol, CLIntersiloUniverse;
@class NSString;

@interface CLTileDownloadSchedulingClient : NSObject <CLIntersiloProxyDelegateProtocol, CLTileDownloadSchedulingClientProtocol> {

	BOOL valid;
	BOOL _hasExecutedScheduleFromCellularConnectivity;
	BOOL _hasExecutedScheduleFromWifiConnectivity;
	id<CLTileDownloadSchedulingServiceProtocol> _proxy;
	id<CLIntersiloUniverse> _universe;
	CLITileDownloadSchedulingClientDelegate* _delegate;

}

@property (nonatomic,retain) id<CLTileDownloadSchedulingServiceProtocol> proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) id<CLIntersiloUniverse> universe;                               //@synthesize universe=_universe - In the implementation block
@property (assign,nonatomic) BOOL hasExecutedScheduleFromCellularConnectivity;               //@synthesize hasExecutedScheduleFromCellularConnectivity=_hasExecutedScheduleFromCellularConnectivity - In the implementation block
@property (assign,nonatomic) BOOL hasExecutedScheduleFromWifiConnectivity;                   //@synthesize hasExecutedScheduleFromWifiConnectivity=_hasExecutedScheduleFromWifiConnectivity - In the implementation block
@property (assign,nonatomic) CLITileDownloadSchedulingClientDelegate* delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
-(void)dealloc;
-(CLITileDownloadSchedulingClientDelegate*)delegate;
-(void)setDelegate:(CLITileDownloadSchedulingClientDelegate*)arg1 ;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(void)setProxy:(id<CLTileDownloadSchedulingServiceProtocol>)arg1 ;
-(id<CLTileDownloadSchedulingServiceProtocol>)proxy;
-(id<CLIntersiloUniverse>)universe;
-(void)setUniverse:(id<CLIntersiloUniverse>)arg1 ;
-(BOOL)hasExecutedScheduleFromCellularConnectivity;
-(BOOL)hasExecutedScheduleFromWifiConnectivity;
-(void)setHasExecutedScheduleFromCellularConnectivity:(BOOL)arg1 ;
-(void)setHasExecutedScheduleFromWifiConnectivity:(BOOL)arg1 ;
-(void)onScheduledTileDownloadWithReachabilityRequirement:(long long)arg1 ;
-(id)initWithUniverse:(id)arg1 andDelegate:(CLITileDownloadSchedulingClientDelegate*)arg2 ;
-(BOOL)scheduleTileDownloadIfNecessary;
@end

