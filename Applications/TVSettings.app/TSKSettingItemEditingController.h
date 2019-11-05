/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSKSettingItem;


@protocol TSKSettingItemEditingController <NSObject>
@property (nonatomic,retain) TSKSettingItem * editingItem; 
@property (assign,nonatomic,__weak) id<TSKSettingItemEditingControllerDelegate> editingDelegate; 
@required
-(void)setEditingDelegate:(id)arg1;
-(id<TSKSettingItemEditingControllerDelegate>)editingDelegate;
-(TSKSettingItem *)editingItem;
-(void)setEditingItem:(id)arg1;

@end

