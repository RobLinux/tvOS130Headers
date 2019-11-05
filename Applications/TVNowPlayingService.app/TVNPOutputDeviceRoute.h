/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:01:20 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVNowPlayingService.app/TVNowPlayingService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVNowPlayingService/TVNPRoute.h>
#import <TVNowPlayingService/MPVolumeControllerDelegate.h>

@class MPAVOutputDeviceRoute, MPVolumeController, NSString;

@interface TVNPOutputDeviceRoute : TVNPRoute <MPVolumeControllerDelegate> {

	MPAVOutputDeviceRoute* _outputDeviceRoute;
	MPVolumeController* _volumeController;

}

@property (nonatomic,retain) MPVolumeController * volumeController;                  //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,retain) MPAVOutputDeviceRoute * outputDeviceRoute;              //@synthesize outputDeviceRoute=_outputDeviceRoute - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_nameForAVRoute:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(void)setVolumeLevel:(id)arg1 ;
-(void)volumeController:(id)arg1 volumeControlAvailableDidChange:(BOOL)arg2 ;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)setVolumeController:(MPVolumeController *)arg1 ;
-(void)setOutputDeviceRoute:(MPAVOutputDeviceRoute *)arg1 ;
-(MPVolumeController *)volumeController;
-(MPAVOutputDeviceRoute *)outputDeviceRoute;
-(void)_updateVolume;
-(void)updateWithOutputDevice:(id)arg1 selectionState:(unsigned long long)arg2 destination:(id)arg3 ;
@end

