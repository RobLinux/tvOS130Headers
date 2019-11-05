/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VUIEventDataSource;

@interface VUIRouterDataSource : NSObject {

	VUIEventDataSource* _selectEventDataSource;
	VUIEventDataSource* _playEventDataSource;
	VUIEventDataSource* _contextMenuEventDataSource;

}

@property (nonatomic,retain) VUIEventDataSource * selectEventDataSource;                   //@synthesize selectEventDataSource=_selectEventDataSource - In the implementation block
@property (nonatomic,retain) VUIEventDataSource * playEventDataSource;                     //@synthesize playEventDataSource=_playEventDataSource - In the implementation block
@property (nonatomic,retain) VUIEventDataSource * contextMenuEventDataSource;              //@synthesize contextMenuEventDataSource=_contextMenuEventDataSource - In the implementation block
-(id)initWithRouterData:(id)arg1 viewElement:(id)arg2 ;
-(VUIEventDataSource *)playEventDataSource;
-(VUIEventDataSource *)selectEventDataSource;
-(VUIEventDataSource *)contextMenuEventDataSource;
-(void)setSelectEventDataSource:(VUIEventDataSource *)arg1 ;
-(void)setPlayEventDataSource:(VUIEventDataSource *)arg1 ;
-(void)setContextMenuEventDataSource:(VUIEventDataSource *)arg1 ;
@end

