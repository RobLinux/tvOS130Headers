/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXSettings.h>

@interface PXDragAndDropSettings : PXSettings {

	BOOL _useData;
	BOOL _dragOutEnabled;
	BOOL _alwaysAllowDragsWithinUserAlbums;
	BOOL _springLoadingEnabled;
	BOOL _useFileProvider;
	long long _reorderCadence;

}

@property (assign,nonatomic) BOOL useData;                                       //@synthesize useData=_useData - In the implementation block
@property (assign,nonatomic) BOOL dragOutEnabled;                                //@synthesize dragOutEnabled=_dragOutEnabled - In the implementation block
@property (assign,nonatomic) BOOL alwaysAllowDragsWithinUserAlbums;              //@synthesize alwaysAllowDragsWithinUserAlbums=_alwaysAllowDragsWithinUserAlbums - In the implementation block
@property (assign,nonatomic) BOOL springLoadingEnabled;                          //@synthesize springLoadingEnabled=_springLoadingEnabled - In the implementation block
@property (assign,nonatomic) BOOL useFileProvider;                               //@synthesize useFileProvider=_useFileProvider - In the implementation block
@property (assign,nonatomic) long long reorderCadence;                           //@synthesize reorderCadence=_reorderCadence - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(id)parentSettings;
-(BOOL)useData;
-(void)setUseData:(BOOL)arg1 ;
-(BOOL)dragOutEnabled;
-(void)setDragOutEnabled:(BOOL)arg1 ;
-(BOOL)alwaysAllowDragsWithinUserAlbums;
-(void)setAlwaysAllowDragsWithinUserAlbums:(BOOL)arg1 ;
-(BOOL)springLoadingEnabled;
-(void)setSpringLoadingEnabled:(BOOL)arg1 ;
-(BOOL)useFileProvider;
-(void)setUseFileProvider:(BOOL)arg1 ;
-(long long)reorderCadence;
-(void)setReorderCadence:(long long)arg1 ;
@end

