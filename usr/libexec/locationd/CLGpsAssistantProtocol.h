/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:47 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLGpsAssistantProtocol <CLNotifierServiceProtocol>
@required
-(void)doAsync:(/*^block*/id)arg1;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1;
-(void)setVehicleSpeedAssistance:(double)arg1 vehicleSpeed:(SCD_Struct_CL176)arg2;
-(void)setVehicleGyroAssistance:(double)arg1 vehicleGyro:(SCD_Struct_CL178)arg2;
-(void)setDirectionOfTravelAssistance:(DirectionOfTravelAssistance)arg1;
-(void)setMapMatchedPositionAssistance:(MapMatchedPositionAssistance)arg1;
-(void)setTunnelBridgeAssistance:(TunnelBridgeAssistance)arg1;
-(void)setTunnelEndPointPositionAssistance:(TunnelEndPositionAssistance)arg1;

@end

