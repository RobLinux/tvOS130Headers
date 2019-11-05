/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_path;
@class NSObject;

@interface CPLNetworkState : NSObject {

	NSObject*<OS_nw_path> _networkPath;

}

@property (nonatomic,readonly) NSObject*<OS_nw_path> networkPath;                  //@synthesize networkPath=_networkPath - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (getter=isConstrained,nonatomic,readonly) BOOL constrained; 
@property (getter=isCellular,nonatomic,readonly) BOOL cellular; 
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)redactedDescription;
-(BOOL)isCellular;
-(BOOL)isConstrained;
-(BOOL)isConnected;
-(id)initWithNetworkPath:(id)arg1 ;
-(NSObject*<OS_nw_path>)networkPath;
@end

