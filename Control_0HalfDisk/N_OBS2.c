#define INITESSAY 0
///entreobs_plot;StateK_plot;obs_twosides_plot,Nvy_meio_plot;TransitionInMeio_plot;box1_FILE,box2_FILE;box3_FILE;dv2_plot[nessay];dv1_plot;N_grainObs_plot;MAXVS_plot;VS_plot[nessay];period_tax_plot;wobs_u_plot;Cw_plot[nessay];Cw_u_plot;Iw_plot;inst_cw_plot


//fluxos de transição
//#regular lattice of obstacles
//
//MaxcorrentBikeMD1_plot

/*
 >>  Computforce()
new measure (cluster!!!! in center)
*/


///new program
// set cut time(**)
// sero prob
// problem segment fault
///File!!
//momento angular por sitio nos dois
#define NDISTRI 2000
#define NFRAME 2000
#define NDOTS 201
#define MAXESSAY 72
#define NPROBV 101
#define NPR 51



const char qI[NFRAME][100]={
  "qI1.dat",
  "qI2.dat",
  "qI3.dat",
  "qI4.dat",
  "qI5.dat",
  "qI6.dat",
  "qI7.dat",
  "qI8.dat",
  "qI9.dat",
  "qI10.dat",
  "qI11.dat",
  "qI12.dat",
  "qI13.dat",
  "qI14.dat",
  "qI15.dat",
  "qI16.dat",
  "qI17.dat",
  "qI18.dat",
  "qI19.dat",
  "qI20.dat",
  "qI21.dat",
  "qI22.dat",
  "qI23.dat",
  "qI24.dat",
  "qI25.dat",
  "qI26.dat",
  "qI27.dat",
  "qI28.dat",
  "qI29.dat",
  "qI30.dat",
  "qI31.dat",
  "qI32.dat",
  "qI33.dat",
  "qI34.dat",
  "qI35.dat",
  "qI36.dat",
  "qI37.dat",
  "qI38.dat",
  "qI39.dat",
  "qI40.dat",
  "qI41.dat",
  "qI42.dat",
  "qI43.dat",
  "qI44.dat",
  "qI45.dat",
  "qI46.dat",
  "qI47.dat",
  "qI48.dat",
  "qI49.dat",
  "qI50.dat",
  "qI51.dat",
  "qI52.dat",
  "qI53.dat",
  "qI54.dat",
  "qI55.dat",
  "qI56.dat",
  "qI57.dat",
  "qI58.dat",
  "qI59.dat",
  "qI60.dat",
  "qI61.dat",
  "qI62.dat",
  "qI63.dat",
  "qI64.dat",
  "qI65.dat",
  "qI66.dat",
  "qI67.dat",
  "qI68.dat",
  "qI69.dat",
  "qI70.dat",
  "qI71.dat",
  "qI72.dat",
  "qI73.dat",
  "qI74.dat",
  "qI75.dat",
  "qI76.dat",
  "qI77.dat",
  "qI78.dat",
  "qI79.dat",
  "qI80.dat",
  "qI81.dat",
  "qI82.dat",
  "qI83.dat",
  "qI84.dat",
  "qI85.dat",
  "qI86.dat",
  "qI87.dat",
  "qI88.dat",
  "qI89.dat",
  "qI90.dat",
  "qI91.dat",
  "qI92.dat",
  "qI93.dat",
  "qI94.dat",
  "qI95.dat",
  "qI96.dat",
  "qI97.dat",
  "qI98.dat",
  "qI99.dat",
  "qI100.dat",
  "qI101.dat",
  "qI102.dat",
  "qI103.dat",
  "qI104.dat",
  "qI105.dat",
  "qI106.dat",
  "qI107.dat",
  "qI108.dat",
  "qI109.dat",
  "qI110.dat",
  "qI111.dat",
  "qI112.dat",
  "qI113.dat",
  "qI114.dat",
  "qI115.dat",
  "qI116.dat",
  "qI117.dat",
  "qI118.dat",
  "qI119.dat",
  "qI120.dat",
  "qI121.dat",
  "qI122.dat",
  "qI123.dat",
  "qI124.dat",
  "qI125.dat",
  "qI126.dat",
  "qI127.dat",
  "qI128.dat",
  "qI129.dat",
  "qI130.dat",
  "qI131.dat",
  "qI132.dat",
  "qI133.dat",
  "qI134.dat",
  "qI135.dat",
  "qI136.dat",
  "qI137.dat",
  "qI138.dat",
  "qI139.dat",
  "qI140.dat",
  "qI141.dat",
  "qI142.dat",
  "qI143.dat",
  "qI144.dat",
  "qI145.dat",
  "qI146.dat",
  "qI147.dat",
  "qI148.dat",
  "qI149.dat",
  "qI150.dat",
  "qI151.dat",
  "qI152.dat",
  "qI153.dat",
  "qI154.dat",
  "qI155.dat",
  "qI156.dat",
  "qI157.dat",
  "qI158.dat",
  "qI159.dat",
  "qI160.dat",
  "qI161.dat",
  "qI162.dat",
  "qI163.dat",
  "qI164.dat",
  "qI165.dat",
  "qI166.dat",
  "qI167.dat",
  "qI168.dat",
  "qI169.dat",
  "qI170.dat",
  "qI171.dat",
  "qI172.dat",
  "qI173.dat",
  "qI174.dat",
  "qI175.dat",
  "qI176.dat",
  "qI177.dat",
  "qI178.dat",
  "qI179.dat",
  "qI180.dat",
  "qI181.dat",
  "qI182.dat",
  "qI183.dat",
  "qI184.dat",
  "qI185.dat",
  "qI186.dat",
  "qI187.dat",
  "qI188.dat",
  "qI189.dat",
  "qI190.dat",
  "qI191.dat",
  "qI192.dat",
  "qI193.dat",
  "qI194.dat",
  "qI195.dat",
  "qI196.dat",
  "qI197.dat",
  "qI198.dat",
  "qI199.dat",
  "qI200.dat",
  "qI201.dat",
  "qI202.dat",
  "qI203.dat",
  "qI204.dat",
  "qI205.dat",
  "qI206.dat",
  "qI207.dat",
  "qI208.dat",
  "qI209.dat",
  "qI210.dat",
  "qI211.dat",
  "qI212.dat",
  "qI213.dat",
  "qI214.dat",
  "qI215.dat",
  "qI216.dat",
  "qI217.dat",
  "qI218.dat",
  "qI219.dat",
  "qI220.dat",
  "qI221.dat",
  "qI222.dat",
  "qI223.dat",
  "qI224.dat",
  "qI225.dat",
  "qI226.dat",
  "qI227.dat",
  "qI228.dat",
  "qI229.dat",
  "qI230.dat",
  "qI231.dat",
  "qI232.dat",
  "qI233.dat",
  "qI234.dat",
  "qI235.dat",
  "qI236.dat",
  "qI237.dat",
  "qI238.dat",
  "qI239.dat",
  "qI240.dat",
  "qI241.dat",
  "qI242.dat",
  "qI243.dat",
  "qI244.dat",
  "qI245.dat",
  "qI246.dat",
  "qI247.dat",
  "qI248.dat",
  "qI249.dat",
  "qI250.dat",
  "qI251.dat",
  "qI252.dat",
  "qI253.dat",
  "qI254.dat",
  "qI255.dat",
  "qI256.dat",
  "qI257.dat",
  "qI258.dat",
  "qI259.dat",
  "qI260.dat",
  "qI261.dat",
  "qI262.dat",
  "qI263.dat",
  "qI264.dat",
  "qI265.dat",
  "qI266.dat",
  "qI267.dat",
  "qI268.dat",
  "qI269.dat",
  "qI270.dat",
  "qI271.dat",
  "qI272.dat",
  "qI273.dat",
  "qI274.dat",
  "qI275.dat",
  "qI276.dat",
  "qI277.dat",
  "qI278.dat",
  "qI279.dat",
  "qI280.dat",
  "qI281.dat",
  "qI282.dat",
  "qI283.dat",
  "qI284.dat",
  "qI285.dat",
  "qI286.dat",
  "qI287.dat",
  "qI288.dat",
  "qI289.dat",
  "qI290.dat",
  "qI291.dat",
  "qI292.dat",
  "qI293.dat",
  "qI294.dat",
  "qI295.dat",
  "qI296.dat",
  "qI297.dat",
  "qI298.dat",
  "qI299.dat",
  "qI300.dat",
  "qI301.dat",
  "qI302.dat",
  "qI303.dat",
  "qI304.dat",
  "qI305.dat",
  "qI306.dat",
  "qI307.dat",
  "qI308.dat",
  "qI309.dat",
  "qI310.dat",
  "qI311.dat",
  "qI312.dat",
  "qI313.dat",
  "qI314.dat",
  "qI315.dat",
  "qI316.dat",
  "qI317.dat",
  "qI318.dat",
  "qI319.dat",
  "qI320.dat",
  "qI321.dat",
  "qI322.dat",
  "qI323.dat",
  "qI324.dat",
  "qI325.dat",
  "qI326.dat",
  "qI327.dat",
  "qI328.dat",
  "qI329.dat",
  "qI330.dat",
  "qI331.dat",
  "qI332.dat",
  "qI333.dat",
  "qI334.dat",
  "qI335.dat",
  "qI336.dat",
  "qI337.dat",
  "qI338.dat",
  "qI339.dat",
  "qI340.dat",
  "qI341.dat",
  "qI342.dat",
  "qI343.dat",
  "qI344.dat",
  "qI345.dat",
  "qI346.dat",
  "qI347.dat",
  "qI348.dat",
  "qI349.dat",
  "qI350.dat",
  "qI351.dat",
  "qI352.dat",
  "qI353.dat",
  "qI354.dat",
  "qI355.dat",
  "qI356.dat",
  "qI357.dat",
  "qI358.dat",
  "qI359.dat",
  "qI360.dat",
  "qI361.dat",
  "qI362.dat",
  "qI363.dat",
  "qI364.dat",
  "qI365.dat",
  "qI366.dat",
  "qI367.dat",
  "qI368.dat",
  "qI369.dat",
  "qI370.dat",
  "qI371.dat",
  "qI372.dat",
  "qI373.dat",
  "qI374.dat",
  "qI375.dat",
  "qI376.dat",
  "qI377.dat",
  "qI378.dat",
  "qI379.dat",
  "qI380.dat",
  "qI381.dat",
  "qI382.dat",
  "qI383.dat",
  "qI384.dat",
  "qI385.dat",
  "qI386.dat",
  "qI387.dat",
  "qI388.dat",
  "qI389.dat",
  "qI390.dat",
  "qI391.dat",
  "qI392.dat",
  "qI393.dat",
  "qI394.dat",
  "qI395.dat",
  "qI396.dat",
  "qI397.dat",
  "qI398.dat",
  "qI399.dat",
  "qI400.dat",
  "qI401.dat",
  "qI402.dat",
  "qI403.dat",
  "qI404.dat",
  "qI405.dat",
  "qI406.dat",
  "qI407.dat",
  "qI408.dat",
  "qI409.dat",
  "qI410.dat",
  "qI411.dat",
  "qI412.dat",
  "qI413.dat",
  "qI414.dat",
  "qI415.dat",
  "qI416.dat",
  "qI417.dat",
  "qI418.dat",
  "qI419.dat",
  "qI420.dat",
  "qI421.dat",
  "qI422.dat",
  "qI423.dat",
  "qI424.dat",
  "qI425.dat",
  "qI426.dat",
  "qI427.dat",
  "qI428.dat",
  "qI429.dat",
  "qI430.dat",
  "qI431.dat",
  "qI432.dat",
  "qI433.dat",
  "qI434.dat",
  "qI435.dat",
  "qI436.dat",
  "qI437.dat",
  "qI438.dat",
  "qI439.dat",
  "qI440.dat",
  "qI441.dat",
  "qI442.dat",
  "qI443.dat",
  "qI444.dat",
  "qI445.dat",
  "qI446.dat",
  "qI447.dat",
  "qI448.dat",
  "qI449.dat",
  "qI450.dat",
  "qI451.dat",
  "qI452.dat",
  "qI453.dat",
  "qI454.dat",
  "qI455.dat",
  "qI456.dat",
  "qI457.dat",
  "qI458.dat",
  "qI459.dat",
  "qI460.dat",
  "qI461.dat",
  "qI462.dat",
  "qI463.dat",
  "qI464.dat",
  "qI465.dat",
  "qI466.dat",
  "qI467.dat",
  "qI468.dat",
  "qI469.dat",
  "qI470.dat",
  "qI471.dat",
  "qI472.dat",
  "qI473.dat",
  "qI474.dat",
  "qI475.dat",
  "qI476.dat",
  "qI477.dat",
  "qI478.dat",
  "qI479.dat",
  "qI480.dat",
  "qI481.dat",
  "qI482.dat",
  "qI483.dat",
  "qI484.dat",
  "qI485.dat",
  "qI486.dat",
  "qI487.dat",
  "qI488.dat",
  "qI489.dat",
  "qI490.dat",
  "qI491.dat",
  "qI492.dat",
  "qI493.dat",
  "qI494.dat",
  "qI495.dat",
  "qI496.dat",
  "qI497.dat",
  "qI498.dat",
  "qI499.dat",
  "qI500.dat",
  "qI501.dat",
  "qI502.dat",
  "qI503.dat",
  "qI504.dat",
  "qI505.dat",
  "qI506.dat",
  "qI507.dat",
  "qI508.dat",
  "qI509.dat",
  "qI510.dat",
  "qI511.dat",
  "qI512.dat",
  "qI513.dat",
  "qI514.dat",
  "qI515.dat",
  "qI516.dat",
  "qI517.dat",
  "qI518.dat",
  "qI519.dat",
  "qI520.dat",
  "qI521.dat",
  "qI522.dat",
  "qI523.dat",
  "qI524.dat",
  "qI525.dat",
  "qI526.dat",
  "qI527.dat",
  "qI528.dat",
  "qI529.dat",
  "qI530.dat",
  "qI531.dat",
  "qI532.dat",
  "qI533.dat",
  "qI534.dat",
  "qI535.dat",
  "qI536.dat",
  "qI537.dat",
  "qI538.dat",
  "qI539.dat",
  "qI540.dat",
  "qI541.dat",
  "qI542.dat",
  "qI543.dat",
  "qI544.dat",
  "qI545.dat",
  "qI546.dat",
  "qI547.dat",
  "qI548.dat",
  "qI549.dat",
  "qI550.dat",
  "qI551.dat",
  "qI552.dat",
  "qI553.dat",
  "qI554.dat",
  "qI555.dat",
  "qI556.dat",
  "qI557.dat",
  "qI558.dat",
  "qI559.dat",
  "qI560.dat",
  "qI561.dat",
  "qI562.dat",
  "qI563.dat",
  "qI564.dat",
  "qI565.dat",
  "qI566.dat",
  "qI567.dat",
  "qI568.dat",
  "qI569.dat",
  "qI570.dat",
  "qI571.dat",
  "qI572.dat",
  "qI573.dat",
  "qI574.dat",
  "qI575.dat",
  "qI576.dat",
  "qI577.dat",
  "qI578.dat",
  "qI579.dat",
  "qI580.dat",
  "qI581.dat",
  "qI582.dat",
  "qI583.dat",
  "qI584.dat",
  "qI585.dat",
  "qI586.dat",
  "qI587.dat",
  "qI588.dat",
  "qI589.dat",
  "qI590.dat",
  "qI591.dat",
  "qI592.dat",
  "qI593.dat",
  "qI594.dat",
  "qI595.dat",
  "qI596.dat",
  "qI597.dat",
  "qI598.dat",
  "qI599.dat",
  "qI600.dat",
  "qI601.dat",
  "qI602.dat",
  "qI603.dat",
  "qI604.dat",
  "qI605.dat",
  "qI606.dat",
  "qI607.dat",
  "qI608.dat",
  "qI609.dat",
  "qI610.dat",
  "qI611.dat",
  "qI612.dat",
  "qI613.dat",
  "qI614.dat",
  "qI615.dat",
  "qI616.dat",
  "qI617.dat",
  "qI618.dat",
  "qI619.dat",
  "qI620.dat",
  "qI621.dat",
  "qI622.dat",
  "qI623.dat",
  "qI624.dat",
  "qI625.dat",
  "qI626.dat",
  "qI627.dat",
  "qI628.dat",
  "qI629.dat",
  "qI630.dat",
  "qI631.dat",
  "qI632.dat",
  "qI633.dat",
  "qI634.dat",
  "qI635.dat",
  "qI636.dat",
  "qI637.dat",
  "qI638.dat",
  "qI639.dat",
  "qI640.dat",
  "qI641.dat",
  "qI642.dat",
  "qI643.dat",
  "qI644.dat",
  "qI645.dat",
  "qI646.dat",
  "qI647.dat",
  "qI648.dat",
  "qI649.dat",
  "qI650.dat",
  "qI651.dat",
  "qI652.dat",
  "qI653.dat",
  "qI654.dat",
  "qI655.dat",
  "qI656.dat",
  "qI657.dat",
  "qI658.dat",
  "qI659.dat",
  "qI660.dat",
  "qI661.dat",
  "qI662.dat",
  "qI663.dat",
  "qI664.dat",
  "qI665.dat",
  "qI666.dat",
  "qI667.dat",
  "qI668.dat",
  "qI669.dat",
  "qI670.dat",
  "qI671.dat",
  "qI672.dat",
  "qI673.dat",
  "qI674.dat",
  "qI675.dat",
  "qI676.dat",
  "qI677.dat",
  "qI678.dat",
  "qI679.dat",
  "qI680.dat",
  "qI681.dat",
  "qI682.dat",
  "qI683.dat",
  "qI684.dat",
  "qI685.dat",
  "qI686.dat",
  "qI687.dat",
  "qI688.dat",
  "qI689.dat",
  "qI690.dat",
  "qI691.dat",
  "qI692.dat",
  "qI693.dat",
  "qI694.dat",
  "qI695.dat",
  "qI696.dat",
  "qI697.dat",
  "qI698.dat",
  "qI699.dat",
  "qI700.dat",
  "qI701.dat",
  "qI702.dat",
  "qI703.dat",
  "qI704.dat",
  "qI705.dat",
  "qI706.dat",
  "qI707.dat",
  "qI708.dat",
  "qI709.dat",
  "qI710.dat",
  "qI711.dat",
  "qI712.dat",
  "qI713.dat",
  "qI714.dat",
  "qI715.dat",
  "qI716.dat",
  "qI717.dat",
  "qI718.dat",
  "qI719.dat",
  "qI720.dat",
  "qI721.dat",
  "qI722.dat",
  "qI723.dat",
  "qI724.dat",
  "qI725.dat",
  "qI726.dat",
  "qI727.dat",
  "qI728.dat",
  "qI729.dat",
  "qI730.dat",
  "qI731.dat",
  "qI732.dat",
  "qI733.dat",
  "qI734.dat",
  "qI735.dat",
  "qI736.dat",
  "qI737.dat",
  "qI738.dat",
  "qI739.dat",
  "qI740.dat",
  "qI741.dat",
  "qI742.dat",
  "qI743.dat",
  "qI744.dat",
  "qI745.dat",
  "qI746.dat",
  "qI747.dat",
  "qI748.dat",
  "qI749.dat",
  "qI750.dat",
  "qI751.dat",
  "qI752.dat",
  "qI753.dat",
  "qI754.dat",
  "qI755.dat",
  "qI756.dat",
  "qI757.dat",
  "qI758.dat",
  "qI759.dat",
  "qI760.dat",
  "qI761.dat",
  "qI762.dat",
  "qI763.dat",
  "qI764.dat",
  "qI765.dat",
  "qI766.dat",
  "qI767.dat",
  "qI768.dat",
  "qI769.dat",
  "qI770.dat",
  "qI771.dat",
  "qI772.dat",
  "qI773.dat",
  "qI774.dat",
  "qI775.dat",
  "qI776.dat",
  "qI777.dat",
  "qI778.dat",
  "qI779.dat",
  "qI780.dat",
  "qI781.dat",
  "qI782.dat",
  "qI783.dat",
  "qI784.dat",
  "qI785.dat",
  "qI786.dat",
  "qI787.dat",
  "qI788.dat",
  "qI789.dat",
  "qI790.dat",
  "qI791.dat",
  "qI792.dat",
  "qI793.dat",
  "qI794.dat",
  "qI795.dat",
  "qI796.dat",
  "qI797.dat",
  "qI798.dat",
  "qI799.dat",
  "qI800.dat",
  "qI801.dat",
  "qI802.dat",
  "qI803.dat",
  "qI804.dat",
  "qI805.dat",
  "qI806.dat",
  "qI807.dat",
  "qI808.dat",
  "qI809.dat",
  "qI810.dat",
  "qI811.dat",
  "qI812.dat",
  "qI813.dat",
  "qI814.dat",
  "qI815.dat",
  "qI816.dat",
  "qI817.dat",
  "qI818.dat",
  "qI819.dat",
  "qI820.dat",
  "qI821.dat",
  "qI822.dat",
  "qI823.dat",
  "qI824.dat",
  "qI825.dat",
  "qI826.dat",
  "qI827.dat",
  "qI828.dat",
  "qI829.dat",
  "qI830.dat",
  "qI831.dat",
  "qI832.dat",
  "qI833.dat",
  "qI834.dat",
  "qI835.dat",
  "qI836.dat",
  "qI837.dat",
  "qI838.dat",
  "qI839.dat",
  "qI840.dat",
  "qI841.dat",
  "qI842.dat",
  "qI843.dat",
  "qI844.dat",
  "qI845.dat",
  "qI846.dat",
  "qI847.dat",
  "qI848.dat",
  "qI849.dat",
  "qI850.dat",
  "qI851.dat",
  "qI852.dat",
  "qI853.dat",
  "qI854.dat",
  "qI855.dat",
  "qI856.dat",
  "qI857.dat",
  "qI858.dat",
  "qI859.dat",
  "qI860.dat",
  "qI861.dat",
  "qI862.dat",
  "qI863.dat",
  "qI864.dat",
  "qI865.dat",
  "qI866.dat",
  "qI867.dat",
  "qI868.dat",
  "qI869.dat",
  "qI870.dat",
  "qI871.dat",
  "qI872.dat",
  "qI873.dat",
  "qI874.dat",
  "qI875.dat",
  "qI876.dat",
  "qI877.dat",
  "qI878.dat",
  "qI879.dat",
  "qI880.dat",
  "qI881.dat",
  "qI882.dat",
  "qI883.dat",
  "qI884.dat",
  "qI885.dat",
  "qI886.dat",
  "qI887.dat",
  "qI888.dat",
  "qI889.dat",
  "qI890.dat",
  "qI891.dat",
  "qI892.dat",
  "qI893.dat",
  "qI894.dat",
  "qI895.dat",
  "qI896.dat",
  "qI897.dat",
  "qI898.dat",
  "qI899.dat",
  "qI900.dat",
  "qI901.dat",
  "qI902.dat",
  "qI903.dat",
  "qI904.dat",
  "qI905.dat",
  "qI906.dat",
  "qI907.dat",
  "qI908.dat",
  "qI909.dat",
  "qI910.dat",
  "qI911.dat",
  "qI912.dat",
  "qI913.dat",
  "qI914.dat",
  "qI915.dat",
  "qI916.dat",
  "qI917.dat",
  "qI918.dat",
  "qI919.dat",
  "qI920.dat",
  "qI921.dat",
  "qI922.dat",
  "qI923.dat",
  "qI924.dat",
  "qI925.dat",
  "qI926.dat",
  "qI927.dat",
  "qI928.dat",
  "qI929.dat",
  "qI930.dat",
  "qI931.dat",
  "qI932.dat",
  "qI933.dat",
  "qI934.dat",
  "qI935.dat",
  "qI936.dat",
  "qI937.dat",
  "qI938.dat",
  "qI939.dat",
  "qI940.dat",
  "qI941.dat",
  "qI942.dat",
  "qI943.dat",
  "qI944.dat",
  "qI945.dat",
  "qI946.dat",
  "qI947.dat",
  "qI948.dat",
  "qI949.dat",
  "qI950.dat",
  "qI951.dat",
  "qI952.dat",
  "qI953.dat",
  "qI954.dat",
  "qI955.dat",
  "qI956.dat",
  "qI957.dat",
  "qI958.dat",
  "qI959.dat",
  "qI960.dat",
  "qI961.dat",
  "qI962.dat",
  "qI963.dat",
  "qI964.dat",
  "qI965.dat",
  "qI966.dat",
  "qI967.dat",
  "qI968.dat",
  "qI969.dat",
  "qI970.dat",
  "qI971.dat",
  "qI972.dat",
  "qI973.dat",
  "qI974.dat",
  "qI975.dat",
  "qI976.dat",
  "qI977.dat",
  "qI978.dat",
  "qI979.dat",
  "qI980.dat",
  "qI981.dat",
  "qI982.dat",
  "qI983.dat",
  "qI984.dat",
  "qI985.dat",
  "qI986.dat",
  "qI987.dat",
  "qI988.dat",
  "qI989.dat",
  "qI990.dat",
  "qI991.dat",
  "qI992.dat",
  "qI993.dat",
  "qI994.dat",
  "qI995.dat",
  "qI996.dat",
  "qI997.dat",
  "qI998.dat",
  "qI999.dat",
  "qI1000.dat",
  "qI1001.dat",
  "qI1002.dat",
  "qI1003.dat",
  "qI1004.dat",
  "qI1005.dat",
  "qI1006.dat",
  "qI1007.dat",
  "qI1008.dat",
  "qI1009.dat",
  "qI1010.dat",
  "qI1011.dat",
  "qI1012.dat",
  "qI1013.dat",
  "qI1014.dat",
  "qI1015.dat",
  "qI1016.dat",
  "qI1017.dat",
  "qI1018.dat",
  "qI1019.dat",
  "qI1020.dat",
  "qI1021.dat",
  "qI1022.dat",
  "qI1023.dat",
  "qI1024.dat",
  "qI1025.dat",
  "qI1026.dat",
  "qI1027.dat",
  "qI1028.dat",
  "qI1029.dat",
  "qI1030.dat",
  "qI1031.dat",
  "qI1032.dat",
  "qI1033.dat",
  "qI1034.dat",
  "qI1035.dat",
  "qI1036.dat",
  "qI1037.dat",
  "qI1038.dat",
  "qI1039.dat",
  "qI1040.dat",
  "qI1041.dat",
  "qI1042.dat",
  "qI1043.dat",
  "qI1044.dat",
  "qI1045.dat",
  "qI1046.dat",
  "qI1047.dat",
  "qI1048.dat",
  "qI1049.dat",
  "qI1050.dat",
  "qI1051.dat",
  "qI1052.dat",
  "qI1053.dat",
  "qI1054.dat",
  "qI1055.dat",
  "qI1056.dat",
  "qI1057.dat",
  "qI1058.dat",
  "qI1059.dat",
  "qI1060.dat",
  "qI1061.dat",
  "qI1062.dat",
  "qI1063.dat",
  "qI1064.dat",
  "qI1065.dat",
  "qI1066.dat",
  "qI1067.dat",
  "qI1068.dat",
  "qI1069.dat",
  "qI1070.dat",
  "qI1071.dat",
  "qI1072.dat",
  "qI1073.dat",
  "qI1074.dat",
  "qI1075.dat",
  "qI1076.dat",
  "qI1077.dat",
  "qI1078.dat",
  "qI1079.dat",
  "qI1080.dat",
  "qI1081.dat",
  "qI1082.dat",
  "qI1083.dat",
  "qI1084.dat",
  "qI1085.dat",
  "qI1086.dat",
  "qI1087.dat",
  "qI1088.dat",
  "qI1089.dat",
  "qI1090.dat",
  "qI1091.dat",
  "qI1092.dat",
  "qI1093.dat",
  "qI1094.dat",
  "qI1095.dat",
  "qI1096.dat",
  "qI1097.dat",
  "qI1098.dat",
  "qI11099.dat",
  "qI1100.dat",
  "qI1101.dat",
  "qI1102.dat",
  "qI1103.dat",
  "qI1104.dat",
  "qI1105.dat",
  "qI1106.dat",
  "qI1107.dat",
  "qI1108.dat",
  "qI1109.dat",
  "qI1110.dat",
  "qI1111.dat",
  "qI1112.dat",
  "qI1113.dat",
  "qI1114.dat",
  "qI1115.dat",
  "qI1116.dat",
  "qI1117.dat",
  "qI1118.dat",
  "qI1119.dat",
  "qI1120.dat",
  "qI1121.dat",
  "qI1122.dat",
  "qI1123.dat",
  "qI1124.dat",
  "qI1125.dat",
  "qI1126.dat",
  "qI1127.dat",
  "qI1128.dat",
  "qI1129.dat",
  "qI1130.dat",
  "qI1131.dat",
  "qI1132.dat",
  "qI1133.dat",
  "qI1134.dat",
  "qI1135.dat",
  "qI1136.dat",
  "qI1137.dat",
  "qI1138.dat",
  "qI1139.dat",
  "qI1140.dat",
  "qI1141.dat",
  "qI1142.dat",
  "qI1143.dat",
  "qI1144.dat",
  "qI1145.dat",
  "qI1146.dat",
  "qI1147.dat",
  "qI1148.dat",
  "qI1149.dat",
  "qI1150.dat",
  "qI1151.dat",
  "qI1152.dat",
  "qI1153.dat",
  "qI1154.dat",
  "qI1155.dat",
  "qI1156.dat",
  "qI1157.dat",
  "qI1158.dat",
  "qI1159.dat",
  "qI1160.dat",
  "qI1161.dat",
  "qI1162.dat",
  "qI1163.dat",
  "qI1164.dat",
  "qI1165.dat",
  "qI1166.dat",
  "qI1167.dat",
  "qI1168.dat",
  "qI1169.dat",
  "qI1170.dat",
  "qI1171.dat",
  "qI1172.dat",
  "qI1173.dat",
  "qI1174.dat",
  "qI1175.dat",
  "qI1176.dat",
  "qI1177.dat",
  "qI1178.dat",
  "qI1179.dat",
  "qI1180.dat",
  "qI1181.dat",
  "qI1182.dat",
  "qI1183.dat",
  "qI1184.dat",
  "qI1185.dat",
  "qI1186.dat",
  "qI1187.dat",
  "qI1188.dat",
  "qI1189.dat",
  "qI1190.dat",
  "qI1191.dat",
  "qI1192.dat",
  "qI1193.dat",
  "qI1194.dat",
  "qI1195.dat",
  "qI1196.dat",
  "qI1197.dat",
  "qI1198.dat",
  "qI1199.dat",
  "qI1200.dat",
  "qI1201.dat",
  "qI1202.dat",
  "qI1203.dat",
  "qI1204.dat",
  "qI1205.dat",
  "qI1206.dat",
  "qI1207.dat",
  "qI1208.dat",
  "qI1209.dat",
  "qI1210.dat",
  "qI1211.dat",
  "qI1212.dat",
  "qI1213.dat",
  "qI1214.dat",
  "qI1215.dat",
  "qI1216.dat",
  "qI1217.dat",
  "qI1218.dat",
  "qI1219.dat",
  "qI1220.dat",
  "qI1221.dat",
  "qI1222.dat",
  "qI1223.dat",
  "qI1224.dat",
  "qI1225.dat",
  "qI1226.dat",
  "qI1227.dat",
  "qI1228.dat",
  "qI1229.dat",
  "qI1230.dat",
  "qI1231.dat",
  "qI1232.dat",
  "qI1233.dat",
  "qI1234.dat",
  "qI1235.dat",
  "qI1236.dat",
  "qI1237.dat",
  "qI1238.dat",
  "qI1239.dat",
  "qI1240.dat",
  "qI1241.dat",
  "qI1242.dat",
  "qI1243.dat",
  "qI1244.dat",
  "qI1245.dat",
  "qI1246.dat",
  "qI1247.dat",
  "qI1248.dat",
  "qI1249.dat",
  "qI1250.dat",
  "qI1251.dat",
  "qI1252.dat",
  "qI1253.dat",
  "qI1254.dat",
  "qI1255.dat",
  "qI1256.dat",
  "qI1257.dat",
  "qI1258.dat",
  "qI1259.dat",
  "qI1260.dat",
  "qI1261.dat",
  "qI1262.dat",
  "qI1263.dat",
  "qI1264.dat",
  "qI1265.dat",
  "qI1266.dat",
  "qI1267.dat",
  "qI1268.dat",
  "qI1269.dat",
  "qI1270.dat",
  "qI1271.dat",
  "qI1272.dat",
  "qI1273.dat",
  "qI1274.dat",
  "qI1275.dat",
  "qI1276.dat",
  "qI1277.dat",
  "qI1278.dat",
  "qI1279.dat",
  "qI1280.dat",
  "qI1281.dat",
  "qI1282.dat",
  "qI1283.dat",
  "qI1284.dat",
  "qI1285.dat",
  "qI1286.dat",
  "qI1287.dat",
  "qI1288.dat",
  "qI1289.dat",
  "qI1290.dat",
  "qI1291.dat",
  "qI1292.dat",
  "qI1293.dat",
  "qI1294.dat",
  "qI1295.dat",
  "qI1296.dat",
  "qI1297.dat",
  "qI1298.dat",
  "qI1299.dat",
  "qI1300.dat",
  "qI1301.dat",
  "qI1302.dat",
  "qI1303.dat",
  "qI1304.dat",
  "qI1305.dat",
  "qI1306.dat",
  "qI1307.dat",
  "qI1308.dat",
  "qI1309.dat",
  "qI1310.dat",
  "qI1311.dat",
  "qI1312.dat",
  "qI1313.dat",
  "qI1314.dat",
  "qI1315.dat",
  "qI1316.dat",
  "qI1317.dat",
  "qI1318.dat",
  "qI1319.dat",
  "qI1320.dat",
  "qI1321.dat",
  "qI1322.dat",
  "qI1323.dat",
  "qI1324.dat",
  "qI1325.dat",
  "qI1326.dat",
  "qI1327.dat",
  "qI1328.dat",
  "qI1329.dat",
  "qI1330.dat",
  "qI1331.dat",
  "qI1332.dat",
  "qI1333.dat",
  "qI1334.dat",
  "qI1335.dat",
  "qI1336.dat",
  "qI1337.dat",
  "qI1338.dat",
  "qI1339.dat",
  "qI1340.dat",
  "qI1341.dat",
  "qI1342.dat",
  "qI1343.dat",
  "qI1344.dat",
  "qI1345.dat",
  "qI1346.dat",
  "qI1347.dat",
  "qI1348.dat",
  "qI1349.dat",
  "qI1350.dat",
  "qI1351.dat",
  "qI1352.dat",
  "qI1353.dat",
  "qI1354.dat",
  "qI1355.dat",
  "qI1356.dat",
  "qI1357.dat",
  "qI1358.dat",
  "qI1359.dat",
  "qI1360.dat",
  "qI1361.dat",
  "qI1362.dat",
  "qI1363.dat",
  "qI1364.dat",
  "qI1365.dat",
  "qI1366.dat",
  "qI1367.dat",
  "qI1368.dat",
  "qI1369.dat",
  "qI1370.dat",
  "qI1371.dat",
  "qI1372.dat",
  "qI1373.dat",
  "qI1374.dat",
  "qI1375.dat",
  "qI1376.dat",
  "qI1377.dat",
  "qI1378.dat",
  "qI1379.dat",
  "qI1380.dat",
  "qI1381.dat",
  "qI1382.dat",
  "qI1383.dat",
  "qI1384.dat",
  "qI1385.dat",
  "qI1386.dat",
  "qI1387.dat",
  "qI1388.dat",
  "qI1389.dat",
  "qI1390.dat",
  "qI1391.dat",
  "qI1392.dat",
  "qI1393.dat",
  "qI1394.dat",
  "qI1395.dat",
  "qI1396.dat",
  "qI1397.dat",
  "qI1398.dat",
  "qI1399.dat",
  "qI1400.dat",
  "qI1401.dat",
  "qI1402.dat",
  "qI1403.dat",
  "qI1404.dat",
  "qI1405.dat",
  "qI1406.dat",
  "qI1407.dat",
  "qI1408.dat",
  "qI1409.dat",
  "qI1410.dat",
  "qI1411.dat",
  "qI1412.dat",
  "qI1413.dat",
  "qI1414.dat",
  "qI1415.dat",
  "qI1416.dat",
  "qI1417.dat",
  "qI1418.dat",
  "qI1419.dat",
  "qI1420.dat",
  "qI1421.dat",
  "qI1422.dat",
  "qI1423.dat",
  "qI1424.dat",
  "qI1425.dat",
  "qI1426.dat",
  "qI1427.dat",
  "qI1428.dat",
  "qI1429.dat",
  "qI1430.dat",
  "qI1431.dat",
  "qI1432.dat",
  "qI1433.dat",
  "qI1434.dat",
  "qI1435.dat",
  "qI1436.dat",
  "qI1437.dat",
  "qI1438.dat",
  "qI1439.dat",
  "qI1440.dat",
  "qI1441.dat",
  "qI1442.dat",
  "qI1443.dat",
  "qI1444.dat",
  "qI1445.dat",
  "qI1446.dat",
  "qI1447.dat",
  "qI1448.dat",
  "qI1449.dat",
  "qI1450.dat",
  "qI1451.dat",
  "qI1452.dat",
  "qI1453.dat",
  "qI1454.dat",
  "qI1455.dat",
  "qI1456.dat",
  "qI1457.dat",
  "qI1458.dat",
  "qI1459.dat",
  "qI1460.dat",
  "qI1461.dat",
  "qI1462.dat",
  "qI1463.dat",
  "qI1464.dat",
  "qI1465.dat",
  "qI1466.dat",
  "qI1467.dat",
  "qI1468.dat",
  "qI1469.dat",
  "qI1470.dat",
  "qI1471.dat",
  "qI1472.dat",
  "qI1473.dat",
  "qI1474.dat",
  "qI1475.dat",
  "qI1476.dat",
  "qI1477.dat",
  "qI1478.dat",
  "qI1479.dat",
  "qI1480.dat",
  "qI1481.dat",
  "qI1482.dat",
  "qI1483.dat",
  "qI1484.dat",
  "qI1485.dat",
  "qI1486.dat",
  "qI1487.dat",
  "qI1488.dat",
  "qI1489.dat",
  "qI1490.dat",
  "qI1491.dat",
  "qI1492.dat",
  "qI1493.dat",
  "qI1494.dat",
  "qI1495.dat",
  "qI1496.dat",
  "qI1497.dat",
  "qI1498.dat",
  "qI1499.dat",
  "qI1500.dat",
  "qI1501.dat",
  "qI1502.dat",
  "qI1503.dat",
  "qI1504.dat",
  "qI1505.dat",
  "qI1506.dat",
  "qI1507.dat",
  "qI1508.dat",
  "qI1509.dat",
  "qI1510.dat",
  "qI1511.dat",
  "qI1512.dat",
  "qI1513.dat",
  "qI1514.dat",
  "qI1515.dat",
  "qI1516.dat",
  "qI1517.dat",
  "qI1518.dat",
  "qI1519.dat",
  "qI1520.dat",
  "qI1521.dat",
  "qI1522.dat",
  "qI1523.dat",
  "qI1524.dat",
  "qI1525.dat",
  "qI1526.dat",
  "qI1527.dat",
  "qI1528.dat",
  "qI1529.dat",
  "qI1530.dat",
  "qI1531.dat",
  "qI1532.dat",
  "qI1533.dat",
  "qI1534.dat",
  "qI1535.dat",
  "qI1536.dat",
  "qI1537.dat",
  "qI1538.dat",
  "qI1539.dat",
  "qI1540.dat",
  "qI1541.dat",
  "qI1542.dat",
  "qI1543.dat",
  "qI1544.dat",
  "qI1545.dat",
  "qI1546.dat",
  "qI1547.dat",
  "qI1548.dat",
  "qI1549.dat",
  "qI1550.dat",
  "qI1551.dat",
  "qI1552.dat",
  "qI1553.dat",
  "qI1554.dat",
  "qI1555.dat",
  "qI1556.dat",
  "qI1557.dat",
  "qI1558.dat",
  "qI1559.dat",
  "qI1560.dat",
  "qI1561.dat",
  "qI1562.dat",
  "qI1563.dat",
  "qI1564.dat",
  "qI1565.dat",
  "qI1566.dat",
  "qI1567.dat",
  "qI1568.dat",
  "qI1569.dat",
  "qI1570.dat",
  "qI1571.dat",
  "qI1572.dat",
  "qI1573.dat",
  "qI1574.dat",
  "qI1575.dat",
  "qI1576.dat",
  "qI1577.dat",
  "qI1578.dat",
  "qI1579.dat",
  "qI1580.dat",
  "qI1581.dat",
  "qI1582.dat",
  "qI1583.dat",
  "qI1584.dat",
  "qI1585.dat",
  "qI1586.dat",
  "qI1587.dat",
  "qI1588.dat",
  "qI1589.dat",
  "qI1590.dat",
  "qI1591.dat",
  "qI1592.dat",
  "qI1593.dat",
  "qI1594.dat",
  "qI1595.dat",
  "qI1596.dat",
  "qI1597.dat",
  "qI1598.dat",
  "qI1599.dat",
  "qI1600.dat",
  "qI1601.dat",
  "qI1602.dat",
  "qI1603.dat",
  "qI1604.dat",
  "qI1605.dat",
  "qI1606.dat",
  "qI1607.dat",
  "qI1608.dat",
  "qI1609.dat",
  "qI1610.dat",
  "qI1611.dat",
  "qI1612.dat",
  "qI1613.dat",
  "qI1614.dat",
  "qI1615.dat",
  "qI1616.dat",
  "qI1617.dat",
  "qI1618.dat",
  "qI1619.dat",
  "qI1620.dat",
  "qI1621.dat",
  "qI1622.dat",
  "qI1623.dat",
  "qI1624.dat",
  "qI1625.dat",
  "qI1626.dat",
  "qI1627.dat",
  "qI1628.dat",
  "qI1629.dat",
  "qI1630.dat",
  "qI1631.dat",
  "qI1632.dat",
  "qI1633.dat",
  "qI1634.dat",
  "qI1635.dat",
  "qI1636.dat",
  "qI1637.dat",
  "qI1638.dat",
  "qI1639.dat",
  "qI1640.dat",
  "qI1641.dat",
  "qI1642.dat",
  "qI1643.dat",
  "qI1644.dat",
  "qI1645.dat",
  "qI1646.dat",
  "qI1647.dat",
  "qI1648.dat",
  "qI1649.dat",
  "qI1650.dat",
  "qI1651.dat",
  "qI1652.dat",
  "qI1653.dat",
  "qI1654.dat",
  "qI1655.dat",
  "qI1656.dat",
  "qI1657.dat",
  "qI1658.dat",
  "qI1659.dat",
  "qI1660.dat",
  "qI1661.dat",
  "qI1662.dat",
  "qI1663.dat",
  "qI1664.dat",
  "qI1665.dat",
  "qI1666.dat",
  "qI1667.dat",
  "qI1668.dat",
  "qI1669.dat",
  "qI1670.dat",
  "qI1671.dat",
  "qI1672.dat",
  "qI1673.dat",
  "qI1674.dat",
  "qI1675.dat",
  "qI1676.dat",
  "qI1677.dat",
  "qI1678.dat",
  "qI1679.dat",
  "qI1680.dat",
  "qI1681.dat",
  "qI1682.dat",
  "qI1683.dat",
  "qI1684.dat",
  "qI1685.dat",
  "qI1686.dat",
  "qI1687.dat",
  "qI1688.dat",
  "qI1689.dat",
  "qI1690.dat",
  "qI1691.dat",
  "qI1692.dat",
  "qI1693.dat",
  "qI1694.dat",
  "qI1695.dat",
  "qI1696.dat",
  "qI1697.dat",
  "qI1698.dat",
  "qI1699.dat",
  "qI1700.dat",
  "qI1701.dat",
  "qI1702.dat",
  "qI1703.dat",
  "qI1704.dat",
  "qI1705.dat",
  "qI1706.dat",
  "qI1707.dat",
  "qI1708.dat",
  "qI1709.dat",
  "qI1710.dat",
  "qI1711.dat",
  "qI1712.dat",
  "qI1713.dat",
  "qI1714.dat",
  "qI1715.dat",
  "qI1716.dat",
  "qI1717.dat",
  "qI1718.dat",
  "qI1719.dat",
  "qI1720.dat",
  "qI1721.dat",
  "qI1722.dat",
  "qI1723.dat",
  "qI1724.dat",
  "qI1725.dat",
  "qI1726.dat",
  "qI1727.dat",
  "qI1728.dat",
  "qI1729.dat",
  "qI1730.dat",
  "qI1731.dat",
  "qI1732.dat",
  "qI1733.dat",
  "qI1734.dat",
  "qI1735.dat",
  "qI1736.dat",
  "qI1737.dat",
  "qI1738.dat",
  "qI1739.dat",
  "qI1740.dat",
  "qI1741.dat",
  "qI1742.dat",
  "qI1743.dat",
  "qI1744.dat",
  "qI1745.dat",
  "qI1746.dat",
  "qI1747.dat",
  "qI1748.dat",
  "qI1749.dat",
  "qI1750.dat",
  "qI1751.dat",
  "qI1752.dat",
  "qI1753.dat",
  "qI1754.dat",
  "qI1755.dat",
  "qI1756.dat",
  "qI1757.dat",
  "qI1758.dat",
  "qI1759.dat",
  "qI1760.dat",
  "qI1761.dat",
  "qI1762.dat",
  "qI1763.dat",
  "qI1764.dat",
  "qI1765.dat",
  "qI1766.dat",
  "qI1767.dat",
  "qI1768.dat",
  "qI1769.dat",
  "qI1770.dat",
  "qI1771.dat",
  "qI1772.dat",
  "qI1773.dat",
  "qI1774.dat",
  "qI1775.dat",
  "qI1776.dat",
  "qI1777.dat",
  "qI1778.dat",
  "qI1779.dat",
  "qI1780.dat",
  "qI1781.dat",
  "qI1782.dat",
  "qI1783.dat",
  "qI1784.dat",
  "qI1785.dat",
  "qI1786.dat",
  "qI1787.dat",
  "qI1788.dat",
  "qI1789.dat",
  "qI1790.dat",
  "qI1791.dat",
  "qI1792.dat",
  "qI1793.dat",
  "qI1794.dat",
  "qI1795.dat",
  "qI1796.dat",
  "qI1797.dat",
  "qI1798.dat",
  "qI1799.dat",
  "qI1800.dat",
  "qI1801.dat",
  "qI1802.dat",
  "qI1803.dat",
  "qI1804.dat",
  "qI1805.dat",
  "qI1806.dat",
  "qI1807.dat",
  "qI1808.dat",
  "qI1809.dat",
  "qI1810.dat",
  "qI1811.dat",
  "qI1812.dat",
  "qI1813.dat",
  "qI1814.dat",
  "qI1815.dat",
  "qI1816.dat",
  "qI1817.dat",
  "qI1818.dat",
  "qI1819.dat",
  "qI1820.dat",
  "qI1821.dat",
  "qI1822.dat",
  "qI1823.dat",
  "qI1824.dat",
  "qI1825.dat",
  "qI1826.dat",
  "qI1827.dat",
  "qI1828.dat",
  "qI1829.dat",
  "qI1830.dat",
  "qI1831.dat",
  "qI1832.dat",
  "qI1833.dat",
  "qI1834.dat",
  "qI1835.dat",
  "qI1836.dat",
  "qI1837.dat",
  "qI1838.dat",
  "qI1839.dat",
  "qI1840.dat",
  "qI1841.dat",
  "qI1842.dat",
  "qI1843.dat",
  "qI1844.dat",
  "qI1845.dat",
  "qI1846.dat",
  "qI1847.dat",
  "qI1848.dat",
  "qI1849.dat",
  "qI1850.dat",
  "qI1851.dat",
  "qI1852.dat",
  "qI1853.dat",
  "qI1854.dat",
  "qI1855.dat",
  "qI1856.dat",
  "qI1857.dat",
  "qI1858.dat",
  "qI1859.dat",
  "qI1860.dat",
  "qI1861.dat",
  "qI1862.dat",
  "qI1863.dat",
  "qI1864.dat",
  "qI1865.dat",
  "qI1866.dat",
  "qI1867.dat",
  "qI1868.dat",
  "qI1869.dat",
  "qI1870.dat",
  "qI1871.dat",
  "qI1872.dat",
  "qI1873.dat",
  "qI1874.dat",
  "qI1875.dat",
  "qI1876.dat",
  "qI1877.dat",
  "qI1878.dat",
  "qI1879.dat",
  "qI1880.dat",
  "qI1881.dat",
  "qI1882.dat",
  "qI1883.dat",
  "qI1884.dat",
  "qI1885.dat",
  "qI1886.dat",
  "qI1887.dat",
  "qI1888.dat",
  "qI1889.dat",
  "qI1890.dat",
  "qI1891.dat",
  "qI1892.dat",
  "qI1893.dat",
  "qI1894.dat",
  "qI1895.dat",
  "qI1896.dat",
  "qI1897.dat",
  "qI1898.dat",
  "qI1899.dat",
  "qI1900.dat",
  "qI1901.dat",
  "qI1902.dat",
  "qI1903.dat",
  "qI1904.dat",
  "qI1905.dat",
  "qI1906.dat",
  "qI1907.dat",
  "qI1908.dat",
  "qI1909.dat",
  "qI1910.dat",
  "qI1911.dat",
  "qI1912.dat",
  "qI1913.dat",
  "qI1914.dat",
  "qI1915.dat",
  "qI1916.dat",
  "qI1917.dat",
  "qI1918.dat",
  "qI1919.dat",
  "qI1920.dat",
  "qI1921.dat",
  "qI1922.dat",
  "qI1923.dat",
  "qI1924.dat",
  "qI1925.dat",
  "qI1926.dat",
  "qI1927.dat",
  "qI1928.dat",
  "qI1929.dat",
  "qI1930.dat",
  "qI1931.dat",
  "qI1932.dat",
  "qI1933.dat",
  "qI1934.dat",
  "qI1935.dat",
  "qI1936.dat",
  "qI1937.dat",
  "qI1938.dat",
  "qI1939.dat",
  "qI1940.dat",
  "qI1941.dat",
  "qI1942.dat",
  "qI1943.dat",
  "qI1944.dat",
  "qI1945.dat",
  "qI1946.dat",
  "qI1947.dat",
  "qI1948.dat",
  "qI1949.dat",
  "qI1950.dat",
  "qI1951.dat",
  "qI1952.dat",
  "qI1953.dat",
  "qI1954.dat",
  "qI1955.dat",
  "qI1956.dat",
  "qI1957.dat",
  "qI1958.dat",
  "qI1959.dat",
  "qI1960.dat",
  "qI1961.dat",
  "qI1962.dat",
  "qI1963.dat",
  "qI1964.dat",
  "qI1965.dat",
  "qI1966.dat",
  "qI1967.dat",
  "qI1968.dat",
  "qI1969.dat",
  "qI1970.dat",
  "qI1971.dat",
  "qI1972.dat",
  "qI1973.dat",
  "qI1974.dat",
  "qI1975.dat",
  "qI1976.dat",
  "qI1977.dat",
  "qI1978.dat",
  "qI1979.dat",
  "qI1980.dat",
  "qI1981.dat",
  "qI1982.dat",
  "qI1983.dat",
  "qI1984.dat",
  "qI1985.dat",
  "qI1986.dat",
  "qI1987.dat",
  "qI1988.dat",
  "qI1989.dat",
  "qI1990.dat",
  "qI1991.dat",
  "qI1992.dat",
  "qI1993.dat",
  "qI1994.dat",
  "qI1995.dat",
  "qI1996.dat",
  "qI1997.dat",
  "qI1998.dat",
  "qI1999.dat",
  "qI2000.dat"
};

//*******************************************************************
const char q[NFRAME][100]={
  "q1.dat",
  "q2.dat",
  "q3.dat",
  "q4.dat",
  "q5.dat",
  "q6.dat",
  "q7.dat",
  "q8.dat",
  "q9.dat",
  "q10.dat",
  "q11.dat",
  "q12.dat",
  "q13.dat",
  "q14.dat",
  "q15.dat",
  "q16.dat",
  "q17.dat",
  "q18.dat",
  "q19.dat",
  "q20.dat",
  "q21.dat",
  "q22.dat",
  "q23.dat",
  "q24.dat",
  "q25.dat",
  "q26.dat",
  "q27.dat",
  "q28.dat",
  "q29.dat",
  "q30.dat",
  "q31.dat",
  "q32.dat",
  "q33.dat",
  "q34.dat",
  "q35.dat",
  "q36.dat",
  "q37.dat",
  "q38.dat",
  "q39.dat",
  "q40.dat",
  "q41.dat",
  "q42.dat",
  "q43.dat",
  "q44.dat",
  "q45.dat",
  "q46.dat",
  "q47.dat",
  "q48.dat",
  "q49.dat",
  "q50.dat",
  "q51.dat",
  "q52.dat",
  "q53.dat",
  "q54.dat",
  "q55.dat",
  "q56.dat",
  "q57.dat",
  "q58.dat",
  "q59.dat",
  "q60.dat",
  "q61.dat",
  "q62.dat",
  "q63.dat",
  "q64.dat",
  "q65.dat",
  "q66.dat",
  "q67.dat",
  "q68.dat",
  "q69.dat",
  "q70.dat",
  "q71.dat",
  "q72.dat",
  "q73.dat",
  "q74.dat",
  "q75.dat",
  "q76.dat",
  "q77.dat",
  "q78.dat",
  "q79.dat",
  "q80.dat",
  "q81.dat",
  "q82.dat",
  "q83.dat",
  "q84.dat",
  "q85.dat",
  "q86.dat",
  "q87.dat",
  "q88.dat",
  "q89.dat",
  "q90.dat",
  "q91.dat",
  "q92.dat",
  "q93.dat",
  "q94.dat",
  "q95.dat",
  "q96.dat",
  "q97.dat",
  "q98.dat",
  "q99.dat",
  "q100.dat",
  "q101.dat",
  "q102.dat",
  "q103.dat",
  "q104.dat",
  "q105.dat",
  "q106.dat",
  "q107.dat",
  "q108.dat",
  "q109.dat",
  "q110.dat",
  "q111.dat",
  "q112.dat",
  "q113.dat",
  "q114.dat",
  "q115.dat",
  "q116.dat",
  "q117.dat",
  "q118.dat",
  "q119.dat",
  "q120.dat",
  "q121.dat",
  "q122.dat",
  "q123.dat",
  "q124.dat",
  "q125.dat",
  "q126.dat",
  "q127.dat",
  "q128.dat",
  "q129.dat",
  "q130.dat",
  "q131.dat",
  "q132.dat",
  "q133.dat",
  "q134.dat",
  "q135.dat",
  "q136.dat",
  "q137.dat",
  "q138.dat",
  "q139.dat",
  "q140.dat",
  "q141.dat",
  "q142.dat",
  "q143.dat",
  "q144.dat",
  "q145.dat",
  "q146.dat",
  "q147.dat",
  "q148.dat",
  "q149.dat",
  "q150.dat",
  "q151.dat",
  "q152.dat",
  "q153.dat",
  "q154.dat",
  "q155.dat",
  "q156.dat",
  "q157.dat",
  "q158.dat",
  "q159.dat",
  "q160.dat",
  "q161.dat",
  "q162.dat",
  "q163.dat",
  "q164.dat",
  "q165.dat",
  "q166.dat",
  "q167.dat",
  "q168.dat",
  "q169.dat",
  "q170.dat",
  "q171.dat",
  "q172.dat",
  "q173.dat",
  "q174.dat",
  "q175.dat",
  "q176.dat",
  "q177.dat",
  "q178.dat",
  "q179.dat",
  "q180.dat",
  "q181.dat",
  "q182.dat",
  "q183.dat",
  "q184.dat",
  "q185.dat",
  "q186.dat",
  "q187.dat",
  "q188.dat",
  "q189.dat",
  "q190.dat",
  "q191.dat",
  "q192.dat",
  "q193.dat",
  "q194.dat",
  "q195.dat",
  "q196.dat",
  "q197.dat",
  "q198.dat",
  "q199.dat",
  "q200.dat",
  "q201.dat",
  "q202.dat",
  "q203.dat",
  "q204.dat",
  "q205.dat",
  "q206.dat",
  "q207.dat",
  "q208.dat",
  "q209.dat",
  "q210.dat",
  "q211.dat",
  "q212.dat",
  "q213.dat",
  "q214.dat",
  "q215.dat",
  "q216.dat",
  "q217.dat",
  "q218.dat",
  "q219.dat",
  "q220.dat",
  "q221.dat",
  "q222.dat",
  "q223.dat",
  "q224.dat",
  "q225.dat",
  "q226.dat",
  "q227.dat",
  "q228.dat",
  "q229.dat",
  "q230.dat",
  "q231.dat",
  "q232.dat",
  "q233.dat",
  "q234.dat",
  "q235.dat",
  "q236.dat",
  "q237.dat",
  "q238.dat",
  "q239.dat",
  "q240.dat",
  "q241.dat",
  "q242.dat",
  "q243.dat",
  "q244.dat",
  "q245.dat",
  "q246.dat",
  "q247.dat",
  "q248.dat",
  "q249.dat",
  "q250.dat",
  "q251.dat",
  "q252.dat",
  "q253.dat",
  "q254.dat",
  "q255.dat",
  "q256.dat",
  "q257.dat",
  "q258.dat",
  "q259.dat",
  "q260.dat",
  "q261.dat",
  "q262.dat",
  "q263.dat",
  "q264.dat",
  "q265.dat",
  "q266.dat",
  "q267.dat",
  "q268.dat",
  "q269.dat",
  "q270.dat",
  "q271.dat",
  "q272.dat",
  "q273.dat",
  "q274.dat",
  "q275.dat",
  "q276.dat",
  "q277.dat",
  "q278.dat",
  "q279.dat",
  "q280.dat",
  "q281.dat",
  "q282.dat",
  "q283.dat",
  "q284.dat",
  "q285.dat",
  "q286.dat",
  "q287.dat",
  "q288.dat",
  "q289.dat",
  "q290.dat",
  "q291.dat",
  "q292.dat",
  "q293.dat",
  "q294.dat",
  "q295.dat",
  "q296.dat",
  "q297.dat",
  "q298.dat",
  "q299.dat",
  "q300.dat",
  "q301.dat",
  "q302.dat",
  "q303.dat",
  "q304.dat",
  "q305.dat",
  "q306.dat",
  "q307.dat",
  "q308.dat",
  "q309.dat",
  "q310.dat",
  "q311.dat",
  "q312.dat",
  "q313.dat",
  "q314.dat",
  "q315.dat",
  "q316.dat",
  "q317.dat",
  "q318.dat",
  "q319.dat",
  "q320.dat",
  "q321.dat",
  "q322.dat",
  "q323.dat",
  "q324.dat",
  "q325.dat",
  "q326.dat",
  "q327.dat",
  "q328.dat",
  "q329.dat",
  "q330.dat",
  "q331.dat",
  "q332.dat",
  "q333.dat",
  "q334.dat",
  "q335.dat",
  "q336.dat",
  "q337.dat",
  "q338.dat",
  "q339.dat",
  "q340.dat",
  "q341.dat",
  "q342.dat",
  "q343.dat",
  "q344.dat",
  "q345.dat",
  "q346.dat",
  "q347.dat",
  "q348.dat",
  "q349.dat",
  "q350.dat",
  "q351.dat",
  "q352.dat",
  "q353.dat",
  "q354.dat",
  "q355.dat",
  "q356.dat",
  "q357.dat",
  "q358.dat",
  "q359.dat",
  "q360.dat",
  "q361.dat",
  "q362.dat",
  "q363.dat",
  "q364.dat",
  "q365.dat",
  "q366.dat",
  "q367.dat",
  "q368.dat",
  "q369.dat",
  "q370.dat",
  "q371.dat",
  "q372.dat",
  "q373.dat",
  "q374.dat",
  "q375.dat",
  "q376.dat",
  "q377.dat",
  "q378.dat",
  "q379.dat",
  "q380.dat",
  "q381.dat",
  "q382.dat",
  "q383.dat",
  "q384.dat",
  "q385.dat",
  "q386.dat",
  "q387.dat",
  "q388.dat",
  "q389.dat",
  "q390.dat",
  "q391.dat",
  "q392.dat",
  "q393.dat",
  "q394.dat",
  "q395.dat",
  "q396.dat",
  "q397.dat",
  "q398.dat",
  "q399.dat",
  "q400.dat",
  "q401.dat",
  "q402.dat",
  "q403.dat",
  "q404.dat",
  "q405.dat",
  "q406.dat",
  "q407.dat",
  "q408.dat",
  "q409.dat",
  "q410.dat",
  "q411.dat",
  "q412.dat",
  "q413.dat",
  "q414.dat",
  "q415.dat",
  "q416.dat",
  "q417.dat",
  "q418.dat",
  "q419.dat",
  "q420.dat",
  "q421.dat",
  "q422.dat",
  "q423.dat",
  "q424.dat",
  "q425.dat",
  "q426.dat",
  "q427.dat",
  "q428.dat",
  "q429.dat",
  "q430.dat",
  "q431.dat",
  "q432.dat",
  "q433.dat",
  "q434.dat",
  "q435.dat",
  "q436.dat",
  "q437.dat",
  "q438.dat",
  "q439.dat",
  "q440.dat",
  "q441.dat",
  "q442.dat",
  "q443.dat",
  "q444.dat",
  "q445.dat",
  "q446.dat",
  "q447.dat",
  "q448.dat",
  "q449.dat",
  "q450.dat",
  "q451.dat",
  "q452.dat",
  "q453.dat",
  "q454.dat",
  "q455.dat",
  "q456.dat",
  "q457.dat",
  "q458.dat",
  "q459.dat",
  "q460.dat",
  "q461.dat",
  "q462.dat",
  "q463.dat",
  "q464.dat",
  "q465.dat",
  "q466.dat",
  "q467.dat",
  "q468.dat",
  "q469.dat",
  "q470.dat",
  "q471.dat",
  "q472.dat",
  "q473.dat",
  "q474.dat",
  "q475.dat",
  "q476.dat",
  "q477.dat",
  "q478.dat",
  "q479.dat",
  "q480.dat",
  "q481.dat",
  "q482.dat",
  "q483.dat",
  "q484.dat",
  "q485.dat",
  "q486.dat",
  "q487.dat",
  "q488.dat",
  "q489.dat",
  "q490.dat",
  "q491.dat",
  "q492.dat",
  "q493.dat",
  "q494.dat",
  "q495.dat",
  "q496.dat",
  "q497.dat",
  "q498.dat",
  "q499.dat",
  "q500.dat",
  "q501.dat",
  "q502.dat",
  "q503.dat",
  "q504.dat",
  "q505.dat",
  "q506.dat",
  "q507.dat",
  "q508.dat",
  "q509.dat",
  "q510.dat",
  "q511.dat",
  "q512.dat",
  "q513.dat",
  "q514.dat",
  "q515.dat",
  "q516.dat",
  "q517.dat",
  "q518.dat",
  "q519.dat",
  "q520.dat",
  "q521.dat",
  "q522.dat",
  "q523.dat",
  "q524.dat",
  "q525.dat",
  "q526.dat",
  "q527.dat",
  "q528.dat",
  "q529.dat",
  "q530.dat",
  "q531.dat",
  "q532.dat",
  "q533.dat",
  "q534.dat",
  "q535.dat",
  "q536.dat",
  "q537.dat",
  "q538.dat",
  "q539.dat",
  "q540.dat",
  "q541.dat",
  "q542.dat",
  "q543.dat",
  "q544.dat",
  "q545.dat",
  "q546.dat",
  "q547.dat",
  "q548.dat",
  "q549.dat",
  "q550.dat",
  "q551.dat",
  "q552.dat",
  "q553.dat",
  "q554.dat",
  "q555.dat",
  "q556.dat",
  "q557.dat",
  "q558.dat",
  "q559.dat",
  "q560.dat",
  "q561.dat",
  "q562.dat",
  "q563.dat",
  "q564.dat",
  "q565.dat",
  "q566.dat",
  "q567.dat",
  "q568.dat",
  "q569.dat",
  "q570.dat",
  "q571.dat",
  "q572.dat",
  "q573.dat",
  "q574.dat",
  "q575.dat",
  "q576.dat",
  "q577.dat",
  "q578.dat",
  "q579.dat",
  "q580.dat",
  "q581.dat",
  "q582.dat",
  "q583.dat",
  "q584.dat",
  "q585.dat",
  "q586.dat",
  "q587.dat",
  "q588.dat",
  "q589.dat",
  "q590.dat",
  "q591.dat",
  "q592.dat",
  "q593.dat",
  "q594.dat",
  "q595.dat",
  "q596.dat",
  "q597.dat",
  "q598.dat",
  "q599.dat",
  "q600.dat",
  "q601.dat",
  "q602.dat",
  "q603.dat",
  "q604.dat",
  "q605.dat",
  "q606.dat",
  "q607.dat",
  "q608.dat",
  "q609.dat",
  "q610.dat",
  "q611.dat",
  "q612.dat",
  "q613.dat",
  "q614.dat",
  "q615.dat",
  "q616.dat",
  "q617.dat",
  "q618.dat",
  "q619.dat",
  "q620.dat",
  "q621.dat",
  "q622.dat",
  "q623.dat",
  "q624.dat",
  "q625.dat",
  "q626.dat",
  "q627.dat",
  "q628.dat",
  "q629.dat",
  "q630.dat",
  "q631.dat",
  "q632.dat",
  "q633.dat",
  "q634.dat",
  "q635.dat",
  "q636.dat",
  "q637.dat",
  "q638.dat",
  "q639.dat",
  "q640.dat",
  "q641.dat",
  "q642.dat",
  "q643.dat",
  "q644.dat",
  "q645.dat",
  "q646.dat",
  "q647.dat",
  "q648.dat",
  "q649.dat",
  "q650.dat",
  "q651.dat",
  "q652.dat",
  "q653.dat",
  "q654.dat",
  "q655.dat",
  "q656.dat",
  "q657.dat",
  "q658.dat",
  "q659.dat",
  "q660.dat",
  "q661.dat",
  "q662.dat",
  "q663.dat",
  "q664.dat",
  "q665.dat",
  "q666.dat",
  "q667.dat",
  "q668.dat",
  "q669.dat",
  "q670.dat",
  "q671.dat",
  "q672.dat",
  "q673.dat",
  "q674.dat",
  "q675.dat",
  "q676.dat",
  "q677.dat",
  "q678.dat",
  "q679.dat",
  "q680.dat",
  "q681.dat",
  "q682.dat",
  "q683.dat",
  "q684.dat",
  "q685.dat",
  "q686.dat",
  "q687.dat",
  "q688.dat",
  "q689.dat",
  "q690.dat",
  "q691.dat",
  "q692.dat",
  "q693.dat",
  "q694.dat",
  "q695.dat",
  "q696.dat",
  "q697.dat",
  "q698.dat",
  "q699.dat",
  "q700.dat",
  "q701.dat",
  "q702.dat",
  "q703.dat",
  "q704.dat",
  "q705.dat",
  "q706.dat",
  "q707.dat",
  "q708.dat",
  "q709.dat",
  "q710.dat",
  "q711.dat",
  "q712.dat",
  "q713.dat",
  "q714.dat",
  "q715.dat",
  "q716.dat",
  "q717.dat",
  "q718.dat",
  "q719.dat",
  "q720.dat",
  "q721.dat",
  "q722.dat",
  "q723.dat",
  "q724.dat",
  "q725.dat",
  "q726.dat",
  "q727.dat",
  "q728.dat",
  "q729.dat",
  "q730.dat",
  "q731.dat",
  "q732.dat",
  "q733.dat",
  "q734.dat",
  "q735.dat",
  "q736.dat",
  "q737.dat",
  "q738.dat",
  "q739.dat",
  "q740.dat",
  "q741.dat",
  "q742.dat",
  "q743.dat",
  "q744.dat",
  "q745.dat",
  "q746.dat",
  "q747.dat",
  "q748.dat",
  "q749.dat",
  "q750.dat",
  "q751.dat",
  "q752.dat",
  "q753.dat",
  "q754.dat",
  "q755.dat",
  "q756.dat",
  "q757.dat",
  "q758.dat",
  "q759.dat",
  "q760.dat",
  "q761.dat",
  "q762.dat",
  "q763.dat",
  "q764.dat",
  "q765.dat",
  "q766.dat",
  "q767.dat",
  "q768.dat",
  "q769.dat",
  "q770.dat",
  "q771.dat",
  "q772.dat",
  "q773.dat",
  "q774.dat",
  "q775.dat",
  "q776.dat",
  "q777.dat",
  "q778.dat",
  "q779.dat",
  "q780.dat",
  "q781.dat",
  "q782.dat",
  "q783.dat",
  "q784.dat",
  "q785.dat",
  "q786.dat",
  "q787.dat",
  "q788.dat",
  "q789.dat",
  "q790.dat",
  "q791.dat",
  "q792.dat",
  "q793.dat",
  "q794.dat",
  "q795.dat",
  "q796.dat",
  "q797.dat",
  "q798.dat",
  "q799.dat",
  "q800.dat",
  "q801.dat",
  "q802.dat",
  "q803.dat",
  "q804.dat",
  "q805.dat",
  "q806.dat",
  "q807.dat",
  "q808.dat",
  "q809.dat",
  "q810.dat",
  "q811.dat",
  "q812.dat",
  "q813.dat",
  "q814.dat",
  "q815.dat",
  "q816.dat",
  "q817.dat",
  "q818.dat",
  "q819.dat",
  "q820.dat",
  "q821.dat",
  "q822.dat",
  "q823.dat",
  "q824.dat",
  "q825.dat",
  "q826.dat",
  "q827.dat",
  "q828.dat",
  "q829.dat",
  "q830.dat",
  "q831.dat",
  "q832.dat",
  "q833.dat",
  "q834.dat",
  "q835.dat",
  "q836.dat",
  "q837.dat",
  "q838.dat",
  "q839.dat",
  "q840.dat",
  "q841.dat",
  "q842.dat",
  "q843.dat",
  "q844.dat",
  "q845.dat",
  "q846.dat",
  "q847.dat",
  "q848.dat",
  "q849.dat",
  "q850.dat",
  "q851.dat",
  "q852.dat",
  "q853.dat",
  "q854.dat",
  "q855.dat",
  "q856.dat",
  "q857.dat",
  "q858.dat",
  "q859.dat",
  "q860.dat",
  "q861.dat",
  "q862.dat",
  "q863.dat",
  "q864.dat",
  "q865.dat",
  "q866.dat",
  "q867.dat",
  "q868.dat",
  "q869.dat",
  "q870.dat",
  "q871.dat",
  "q872.dat",
  "q873.dat",
  "q874.dat",
  "q875.dat",
  "q876.dat",
  "q877.dat",
  "q878.dat",
  "q879.dat",
  "q880.dat",
  "q881.dat",
  "q882.dat",
  "q883.dat",
  "q884.dat",
  "q885.dat",
  "q886.dat",
  "q887.dat",
  "q888.dat",
  "q889.dat",
  "q890.dat",
  "q891.dat",
  "q892.dat",
  "q893.dat",
  "q894.dat",
  "q895.dat",
  "q896.dat",
  "q897.dat",
  "q898.dat",
  "q899.dat",
  "q900.dat",
  "q901.dat",
  "q902.dat",
  "q903.dat",
  "q904.dat",
  "q905.dat",
  "q906.dat",
  "q907.dat",
  "q908.dat",
  "q909.dat",
  "q910.dat",
  "q911.dat",
  "q912.dat",
  "q913.dat",
  "q914.dat",
  "q915.dat",
  "q916.dat",
  "q917.dat",
  "q918.dat",
  "q919.dat",
  "q920.dat",
  "q921.dat",
  "q922.dat",
  "q923.dat",
  "q924.dat",
  "q925.dat",
  "q926.dat",
  "q927.dat",
  "q928.dat",
  "q929.dat",
  "q930.dat",
  "q931.dat",
  "q932.dat",
  "q933.dat",
  "q934.dat",
  "q935.dat",
  "q936.dat",
  "q937.dat",
  "q938.dat",
  "q939.dat",
  "q940.dat",
  "q941.dat",
  "q942.dat",
  "q943.dat",
  "q944.dat",
  "q945.dat",
  "q946.dat",
  "q947.dat",
  "q948.dat",
  "q949.dat",
  "q950.dat",
  "q951.dat",
  "q952.dat",
  "q953.dat",
  "q954.dat",
  "q955.dat",
  "q956.dat",
  "q957.dat",
  "q958.dat",
  "q959.dat",
  "q960.dat",
  "q961.dat",
  "q962.dat",
  "q963.dat",
  "q964.dat",
  "q965.dat",
  "q966.dat",
  "q967.dat",
  "q968.dat",
  "q969.dat",
  "q970.dat",
  "q971.dat",
  "q972.dat",
  "q973.dat",
  "q974.dat",
  "q975.dat",
  "q976.dat",
  "q977.dat",
  "q978.dat",
  "q979.dat",
  "q980.dat",
  "q981.dat",
  "q982.dat",
  "q983.dat",
  "q984.dat",
  "q985.dat",
  "q986.dat",
  "q987.dat",
  "q988.dat",
  "q989.dat",
  "q990.dat",
  "q991.dat",
  "q992.dat",
  "q993.dat",
  "q994.dat",
  "q995.dat",
  "q996.dat",
  "q997.dat",
  "q998.dat",
  "q999.dat",
  "q1000.dat",
  "q1001.dat",
  "q1002.dat",
  "q1003.dat",
  "q1004.dat",
  "q1005.dat",
  "q1006.dat",
  "q1007.dat",
  "q1008.dat",
  "q1009.dat",
  "q1010.dat",
  "q1011.dat",
  "q1012.dat",
  "q1013.dat",
  "q1014.dat",
  "q1015.dat",
  "q1016.dat",
  "q1017.dat",
  "q1018.dat",
  "q1019.dat",
  "q1020.dat",
  "q1021.dat",
  "q1022.dat",
  "q1023.dat",
  "q1024.dat",
  "q1025.dat",
  "q1026.dat",
  "q1027.dat",
  "q1028.dat",
  "q1029.dat",
  "q1030.dat",
  "q1031.dat",
  "q1032.dat",
  "q1033.dat",
  "q1034.dat",
  "q1035.dat",
  "q1036.dat",
  "q1037.dat",
  "q1038.dat",
  "q1039.dat",
  "q1040.dat",
  "q1041.dat",
  "q1042.dat",
  "q1043.dat",
  "q1044.dat",
  "q1045.dat",
  "q1046.dat",
  "q1047.dat",
  "q1048.dat",
  "q1049.dat",
  "q1050.dat",
  "q1051.dat",
  "q1052.dat",
  "q1053.dat",
  "q1054.dat",
  "q1055.dat",
  "q1056.dat",
  "q1057.dat",
  "q1058.dat",
  "q1059.dat",
  "q1060.dat",
  "q1061.dat",
  "q1062.dat",
  "q1063.dat",
  "q1064.dat",
  "q1065.dat",
  "q1066.dat",
  "q1067.dat",
  "q1068.dat",
  "q1069.dat",
  "q1070.dat",
  "q1071.dat",
  "q1072.dat",
  "q1073.dat",
  "q1074.dat",
  "q1075.dat",
  "q1076.dat",
  "q1077.dat",
  "q1078.dat",
  "q1079.dat",
  "q1080.dat",
  "q1081.dat",
  "q1082.dat",
  "q1083.dat",
  "q1084.dat",
  "q1085.dat",
  "q1086.dat",
  "q1087.dat",
  "q1088.dat",
  "q1089.dat",
  "q1090.dat",
  "q1091.dat",
  "q1092.dat",
  "q1093.dat",
  "q1094.dat",
  "q1095.dat",
  "q1096.dat",
  "q1097.dat",
  "q1098.dat",
  "q11099.dat",
  "q1100.dat",
  "q1101.dat",
  "q1102.dat",
  "q1103.dat",
  "q1104.dat",
  "q1105.dat",
  "q1106.dat",
  "q1107.dat",
  "q1108.dat",
  "q1109.dat",
  "q1110.dat",
  "q1111.dat",
  "q1112.dat",
  "q1113.dat",
  "q1114.dat",
  "q1115.dat",
  "q1116.dat",
  "q1117.dat",
  "q1118.dat",
  "q1119.dat",
  "q1120.dat",
  "q1121.dat",
  "q1122.dat",
  "q1123.dat",
  "q1124.dat",
  "q1125.dat",
  "q1126.dat",
  "q1127.dat",
  "q1128.dat",
  "q1129.dat",
  "q1130.dat",
  "q1131.dat",
  "q1132.dat",
  "q1133.dat",
  "q1134.dat",
  "q1135.dat",
  "q1136.dat",
  "q1137.dat",
  "q1138.dat",
  "q1139.dat",
  "q1140.dat",
  "q1141.dat",
  "q1142.dat",
  "q1143.dat",
  "q1144.dat",
  "q1145.dat",
  "q1146.dat",
  "q1147.dat",
  "q1148.dat",
  "q1149.dat",
  "q1150.dat",
  "q1151.dat",
  "q1152.dat",
  "q1153.dat",
  "q1154.dat",
  "q1155.dat",
  "q1156.dat",
  "q1157.dat",
  "q1158.dat",
  "q1159.dat",
  "q1160.dat",
  "q1161.dat",
  "q1162.dat",
  "q1163.dat",
  "q1164.dat",
  "q1165.dat",
  "q1166.dat",
  "q1167.dat",
  "q1168.dat",
  "q1169.dat",
  "q1170.dat",
  "q1171.dat",
  "q1172.dat",
  "q1173.dat",
  "q1174.dat",
  "q1175.dat",
  "q1176.dat",
  "q1177.dat",
  "q1178.dat",
  "q1179.dat",
  "q1180.dat",
  "q1181.dat",
  "q1182.dat",
  "q1183.dat",
  "q1184.dat",
  "q1185.dat",
  "q1186.dat",
  "q1187.dat",
  "q1188.dat",
  "q1189.dat",
  "q1190.dat",
  "q1191.dat",
  "q1192.dat",
  "q1193.dat",
  "q1194.dat",
  "q1195.dat",
  "q1196.dat",
  "q1197.dat",
  "q1198.dat",
  "q1199.dat",
  "q1200.dat",
  "q1201.dat",
  "q1202.dat",
  "q1203.dat",
  "q1204.dat",
  "q1205.dat",
  "q1206.dat",
  "q1207.dat",
  "q1208.dat",
  "q1209.dat",
  "q1210.dat",
  "q1211.dat",
  "q1212.dat",
  "q1213.dat",
  "q1214.dat",
  "q1215.dat",
  "q1216.dat",
  "q1217.dat",
  "q1218.dat",
  "q1219.dat",
  "q1220.dat",
  "q1221.dat",
  "q1222.dat",
  "q1223.dat",
  "q1224.dat",
  "q1225.dat",
  "q1226.dat",
  "q1227.dat",
  "q1228.dat",
  "q1229.dat",
  "q1230.dat",
  "q1231.dat",
  "q1232.dat",
  "q1233.dat",
  "q1234.dat",
  "q1235.dat",
  "q1236.dat",
  "q1237.dat",
  "q1238.dat",
  "q1239.dat",
  "q1240.dat",
  "q1241.dat",
  "q1242.dat",
  "q1243.dat",
  "q1244.dat",
  "q1245.dat",
  "q1246.dat",
  "q1247.dat",
  "q1248.dat",
  "q1249.dat",
  "q1250.dat",
  "q1251.dat",
  "q1252.dat",
  "q1253.dat",
  "q1254.dat",
  "q1255.dat",
  "q1256.dat",
  "q1257.dat",
  "q1258.dat",
  "q1259.dat",
  "q1260.dat",
  "q1261.dat",
  "q1262.dat",
  "q1263.dat",
  "q1264.dat",
  "q1265.dat",
  "q1266.dat",
  "q1267.dat",
  "q1268.dat",
  "q1269.dat",
  "q1270.dat",
  "q1271.dat",
  "q1272.dat",
  "q1273.dat",
  "q1274.dat",
  "q1275.dat",
  "q1276.dat",
  "q1277.dat",
  "q1278.dat",
  "q1279.dat",
  "q1280.dat",
  "q1281.dat",
  "q1282.dat",
  "q1283.dat",
  "q1284.dat",
  "q1285.dat",
  "q1286.dat",
  "q1287.dat",
  "q1288.dat",
  "q1289.dat",
  "q1290.dat",
  "q1291.dat",
  "q1292.dat",
  "q1293.dat",
  "q1294.dat",
  "q1295.dat",
  "q1296.dat",
  "q1297.dat",
  "q1298.dat",
  "q1299.dat",
  "q1300.dat",
  "q1301.dat",
  "q1302.dat",
  "q1303.dat",
  "q1304.dat",
  "q1305.dat",
  "q1306.dat",
  "q1307.dat",
  "q1308.dat",
  "q1309.dat",
  "q1310.dat",
  "q1311.dat",
  "q1312.dat",
  "q1313.dat",
  "q1314.dat",
  "q1315.dat",
  "q1316.dat",
  "q1317.dat",
  "q1318.dat",
  "q1319.dat",
  "q1320.dat",
  "q1321.dat",
  "q1322.dat",
  "q1323.dat",
  "q1324.dat",
  "q1325.dat",
  "q1326.dat",
  "q1327.dat",
  "q1328.dat",
  "q1329.dat",
  "q1330.dat",
  "q1331.dat",
  "q1332.dat",
  "q1333.dat",
  "q1334.dat",
  "q1335.dat",
  "q1336.dat",
  "q1337.dat",
  "q1338.dat",
  "q1339.dat",
  "q1340.dat",
  "q1341.dat",
  "q1342.dat",
  "q1343.dat",
  "q1344.dat",
  "q1345.dat",
  "q1346.dat",
  "q1347.dat",
  "q1348.dat",
  "q1349.dat",
  "q1350.dat",
  "q1351.dat",
  "q1352.dat",
  "q1353.dat",
  "q1354.dat",
  "q1355.dat",
  "q1356.dat",
  "q1357.dat",
  "q1358.dat",
  "q1359.dat",
  "q1360.dat",
  "q1361.dat",
  "q1362.dat",
  "q1363.dat",
  "q1364.dat",
  "q1365.dat",
  "q1366.dat",
  "q1367.dat",
  "q1368.dat",
  "q1369.dat",
  "q1370.dat",
  "q1371.dat",
  "q1372.dat",
  "q1373.dat",
  "q1374.dat",
  "q1375.dat",
  "q1376.dat",
  "q1377.dat",
  "q1378.dat",
  "q1379.dat",
  "q1380.dat",
  "q1381.dat",
  "q1382.dat",
  "q1383.dat",
  "q1384.dat",
  "q1385.dat",
  "q1386.dat",
  "q1387.dat",
  "q1388.dat",
  "q1389.dat",
  "q1390.dat",
  "q1391.dat",
  "q1392.dat",
  "q1393.dat",
  "q1394.dat",
  "q1395.dat",
  "q1396.dat",
  "q1397.dat",
  "q1398.dat",
  "q1399.dat",
  "q1400.dat",
  "q1401.dat",
  "q1402.dat",
  "q1403.dat",
  "q1404.dat",
  "q1405.dat",
  "q1406.dat",
  "q1407.dat",
  "q1408.dat",
  "q1409.dat",
  "q1410.dat",
  "q1411.dat",
  "q1412.dat",
  "q1413.dat",
  "q1414.dat",
  "q1415.dat",
  "q1416.dat",
  "q1417.dat",
  "q1418.dat",
  "q1419.dat",
  "q1420.dat",
  "q1421.dat",
  "q1422.dat",
  "q1423.dat",
  "q1424.dat",
  "q1425.dat",
  "q1426.dat",
  "q1427.dat",
  "q1428.dat",
  "q1429.dat",
  "q1430.dat",
  "q1431.dat",
  "q1432.dat",
  "q1433.dat",
  "q1434.dat",
  "q1435.dat",
  "q1436.dat",
  "q1437.dat",
  "q1438.dat",
  "q1439.dat",
  "q1440.dat",
  "q1441.dat",
  "q1442.dat",
  "q1443.dat",
  "q1444.dat",
  "q1445.dat",
  "q1446.dat",
  "q1447.dat",
  "q1448.dat",
  "q1449.dat",
  "q1450.dat",
  "q1451.dat",
  "q1452.dat",
  "q1453.dat",
  "q1454.dat",
  "q1455.dat",
  "q1456.dat",
  "q1457.dat",
  "q1458.dat",
  "q1459.dat",
  "q1460.dat",
  "q1461.dat",
  "q1462.dat",
  "q1463.dat",
  "q1464.dat",
  "q1465.dat",
  "q1466.dat",
  "q1467.dat",
  "q1468.dat",
  "q1469.dat",
  "q1470.dat",
  "q1471.dat",
  "q1472.dat",
  "q1473.dat",
  "q1474.dat",
  "q1475.dat",
  "q1476.dat",
  "q1477.dat",
  "q1478.dat",
  "q1479.dat",
  "q1480.dat",
  "q1481.dat",
  "q1482.dat",
  "q1483.dat",
  "q1484.dat",
  "q1485.dat",
  "q1486.dat",
  "q1487.dat",
  "q1488.dat",
  "q1489.dat",
  "q1490.dat",
  "q1491.dat",
  "q1492.dat",
  "q1493.dat",
  "q1494.dat",
  "q1495.dat",
  "q1496.dat",
  "q1497.dat",
  "q1498.dat",
  "q1499.dat",
  "q1500.dat",
  "q1501.dat",
  "q1502.dat",
  "q1503.dat",
  "q1504.dat",
  "q1505.dat",
  "q1506.dat",
  "q1507.dat",
  "q1508.dat",
  "q1509.dat",
  "q1510.dat",
  "q1511.dat",
  "q1512.dat",
  "q1513.dat",
  "q1514.dat",
  "q1515.dat",
  "q1516.dat",
  "q1517.dat",
  "q1518.dat",
  "q1519.dat",
  "q1520.dat",
  "q1521.dat",
  "q1522.dat",
  "q1523.dat",
  "q1524.dat",
  "q1525.dat",
  "q1526.dat",
  "q1527.dat",
  "q1528.dat",
  "q1529.dat",
  "q1530.dat",
  "q1531.dat",
  "q1532.dat",
  "q1533.dat",
  "q1534.dat",
  "q1535.dat",
  "q1536.dat",
  "q1537.dat",
  "q1538.dat",
  "q1539.dat",
  "q1540.dat",
  "q1541.dat",
  "q1542.dat",
  "q1543.dat",
  "q1544.dat",
  "q1545.dat",
  "q1546.dat",
  "q1547.dat",
  "q1548.dat",
  "q1549.dat",
  "q1550.dat",
  "q1551.dat",
  "q1552.dat",
  "q1553.dat",
  "q1554.dat",
  "q1555.dat",
  "q1556.dat",
  "q1557.dat",
  "q1558.dat",
  "q1559.dat",
  "q1560.dat",
  "q1561.dat",
  "q1562.dat",
  "q1563.dat",
  "q1564.dat",
  "q1565.dat",
  "q1566.dat",
  "q1567.dat",
  "q1568.dat",
  "q1569.dat",
  "q1570.dat",
  "q1571.dat",
  "q1572.dat",
  "q1573.dat",
  "q1574.dat",
  "q1575.dat",
  "q1576.dat",
  "q1577.dat",
  "q1578.dat",
  "q1579.dat",
  "q1580.dat",
  "q1581.dat",
  "q1582.dat",
  "q1583.dat",
  "q1584.dat",
  "q1585.dat",
  "q1586.dat",
  "q1587.dat",
  "q1588.dat",
  "q1589.dat",
  "q1590.dat",
  "q1591.dat",
  "q1592.dat",
  "q1593.dat",
  "q1594.dat",
  "q1595.dat",
  "q1596.dat",
  "q1597.dat",
  "q1598.dat",
  "q1599.dat",
  "q1600.dat",
  "q1601.dat",
  "q1602.dat",
  "q1603.dat",
  "q1604.dat",
  "q1605.dat",
  "q1606.dat",
  "q1607.dat",
  "q1608.dat",
  "q1609.dat",
  "q1610.dat",
  "q1611.dat",
  "q1612.dat",
  "q1613.dat",
  "q1614.dat",
  "q1615.dat",
  "q1616.dat",
  "q1617.dat",
  "q1618.dat",
  "q1619.dat",
  "q1620.dat",
  "q1621.dat",
  "q1622.dat",
  "q1623.dat",
  "q1624.dat",
  "q1625.dat",
  "q1626.dat",
  "q1627.dat",
  "q1628.dat",
  "q1629.dat",
  "q1630.dat",
  "q1631.dat",
  "q1632.dat",
  "q1633.dat",
  "q1634.dat",
  "q1635.dat",
  "q1636.dat",
  "q1637.dat",
  "q1638.dat",
  "q1639.dat",
  "q1640.dat",
  "q1641.dat",
  "q1642.dat",
  "q1643.dat",
  "q1644.dat",
  "q1645.dat",
  "q1646.dat",
  "q1647.dat",
  "q1648.dat",
  "q1649.dat",
  "q1650.dat",
  "q1651.dat",
  "q1652.dat",
  "q1653.dat",
  "q1654.dat",
  "q1655.dat",
  "q1656.dat",
  "q1657.dat",
  "q1658.dat",
  "q1659.dat",
  "q1660.dat",
  "q1661.dat",
  "q1662.dat",
  "q1663.dat",
  "q1664.dat",
  "q1665.dat",
  "q1666.dat",
  "q1667.dat",
  "q1668.dat",
  "q1669.dat",
  "q1670.dat",
  "q1671.dat",
  "q1672.dat",
  "q1673.dat",
  "q1674.dat",
  "q1675.dat",
  "q1676.dat",
  "q1677.dat",
  "q1678.dat",
  "q1679.dat",
  "q1680.dat",
  "q1681.dat",
  "q1682.dat",
  "q1683.dat",
  "q1684.dat",
  "q1685.dat",
  "q1686.dat",
  "q1687.dat",
  "q1688.dat",
  "q1689.dat",
  "q1690.dat",
  "q1691.dat",
  "q1692.dat",
  "q1693.dat",
  "q1694.dat",
  "q1695.dat",
  "q1696.dat",
  "q1697.dat",
  "q1698.dat",
  "q1699.dat",
  "q1700.dat",
  "q1701.dat",
  "q1702.dat",
  "q1703.dat",
  "q1704.dat",
  "q1705.dat",
  "q1706.dat",
  "q1707.dat",
  "q1708.dat",
  "q1709.dat",
  "q1710.dat",
  "q1711.dat",
  "q1712.dat",
  "q1713.dat",
  "q1714.dat",
  "q1715.dat",
  "q1716.dat",
  "q1717.dat",
  "q1718.dat",
  "q1719.dat",
  "q1720.dat",
  "q1721.dat",
  "q1722.dat",
  "q1723.dat",
  "q1724.dat",
  "q1725.dat",
  "q1726.dat",
  "q1727.dat",
  "q1728.dat",
  "q1729.dat",
  "q1730.dat",
  "q1731.dat",
  "q1732.dat",
  "q1733.dat",
  "q1734.dat",
  "q1735.dat",
  "q1736.dat",
  "q1737.dat",
  "q1738.dat",
  "q1739.dat",
  "q1740.dat",
  "q1741.dat",
  "q1742.dat",
  "q1743.dat",
  "q1744.dat",
  "q1745.dat",
  "q1746.dat",
  "q1747.dat",
  "q1748.dat",
  "q1749.dat",
  "q1750.dat",
  "q1751.dat",
  "q1752.dat",
  "q1753.dat",
  "q1754.dat",
  "q1755.dat",
  "q1756.dat",
  "q1757.dat",
  "q1758.dat",
  "q1759.dat",
  "q1760.dat",
  "q1761.dat",
  "q1762.dat",
  "q1763.dat",
  "q1764.dat",
  "q1765.dat",
  "q1766.dat",
  "q1767.dat",
  "q1768.dat",
  "q1769.dat",
  "q1770.dat",
  "q1771.dat",
  "q1772.dat",
  "q1773.dat",
  "q1774.dat",
  "q1775.dat",
  "q1776.dat",
  "q1777.dat",
  "q1778.dat",
  "q1779.dat",
  "q1780.dat",
  "q1781.dat",
  "q1782.dat",
  "q1783.dat",
  "q1784.dat",
  "q1785.dat",
  "q1786.dat",
  "q1787.dat",
  "q1788.dat",
  "q1789.dat",
  "q1790.dat",
  "q1791.dat",
  "q1792.dat",
  "q1793.dat",
  "q1794.dat",
  "q1795.dat",
  "q1796.dat",
  "q1797.dat",
  "q1798.dat",
  "q1799.dat",
  "q1800.dat",
  "q1801.dat",
  "q1802.dat",
  "q1803.dat",
  "q1804.dat",
  "q1805.dat",
  "q1806.dat",
  "q1807.dat",
  "q1808.dat",
  "q1809.dat",
  "q1810.dat",
  "q1811.dat",
  "q1812.dat",
  "q1813.dat",
  "q1814.dat",
  "q1815.dat",
  "q1816.dat",
  "q1817.dat",
  "q1818.dat",
  "q1819.dat",
  "q1820.dat",
  "q1821.dat",
  "q1822.dat",
  "q1823.dat",
  "q1824.dat",
  "q1825.dat",
  "q1826.dat",
  "q1827.dat",
  "q1828.dat",
  "q1829.dat",
  "q1830.dat",
  "q1831.dat",
  "q1832.dat",
  "q1833.dat",
  "q1834.dat",
  "q1835.dat",
  "q1836.dat",
  "q1837.dat",
  "q1838.dat",
  "q1839.dat",
  "q1840.dat",
  "q1841.dat",
  "q1842.dat",
  "q1843.dat",
  "q1844.dat",
  "q1845.dat",
  "q1846.dat",
  "q1847.dat",
  "q1848.dat",
  "q1849.dat",
  "q1850.dat",
  "q1851.dat",
  "q1852.dat",
  "q1853.dat",
  "q1854.dat",
  "q1855.dat",
  "q1856.dat",
  "q1857.dat",
  "q1858.dat",
  "q1859.dat",
  "q1860.dat",
  "q1861.dat",
  "q1862.dat",
  "q1863.dat",
  "q1864.dat",
  "q1865.dat",
  "q1866.dat",
  "q1867.dat",
  "q1868.dat",
  "q1869.dat",
  "q1870.dat",
  "q1871.dat",
  "q1872.dat",
  "q1873.dat",
  "q1874.dat",
  "q1875.dat",
  "q1876.dat",
  "q1877.dat",
  "q1878.dat",
  "q1879.dat",
  "q1880.dat",
  "q1881.dat",
  "q1882.dat",
  "q1883.dat",
  "q1884.dat",
  "q1885.dat",
  "q1886.dat",
  "q1887.dat",
  "q1888.dat",
  "q1889.dat",
  "q1890.dat",
  "q1891.dat",
  "q1892.dat",
  "q1893.dat",
  "q1894.dat",
  "q1895.dat",
  "q1896.dat",
  "q1897.dat",
  "q1898.dat",
  "q1899.dat",
  "q1900.dat",
  "q1901.dat",
  "q1902.dat",
  "q1903.dat",
  "q1904.dat",
  "q1905.dat",
  "q1906.dat",
  "q1907.dat",
  "q1908.dat",
  "q1909.dat",
  "q1910.dat",
  "q1911.dat",
  "q1912.dat",
  "q1913.dat",
  "q1914.dat",
  "q1915.dat",
  "q1916.dat",
  "q1917.dat",
  "q1918.dat",
  "q1919.dat",
  "q1920.dat",
  "q1921.dat",
  "q1922.dat",
  "q1923.dat",
  "q1924.dat",
  "q1925.dat",
  "q1926.dat",
  "q1927.dat",
  "q1928.dat",
  "q1929.dat",
  "q1930.dat",
  "q1931.dat",
  "q1932.dat",
  "q1933.dat",
  "q1934.dat",
  "q1935.dat",
  "q1936.dat",
  "q1937.dat",
  "q1938.dat",
  "q1939.dat",
  "q1940.dat",
  "q1941.dat",
  "q1942.dat",
  "q1943.dat",
  "q1944.dat",
  "q1945.dat",
  "q1946.dat",
  "q1947.dat",
  "q1948.dat",
  "q1949.dat",
  "q1950.dat",
  "q1951.dat",
  "q1952.dat",
  "q1953.dat",
  "q1954.dat",
  "q1955.dat",
  "q1956.dat",
  "q1957.dat",
  "q1958.dat",
  "q1959.dat",
  "q1960.dat",
  "q1961.dat",
  "q1962.dat",
  "q1963.dat",
  "q1964.dat",
  "q1965.dat",
  "q1966.dat",
  "q1967.dat",
  "q1968.dat",
  "q1969.dat",
  "q1970.dat",
  "q1971.dat",
  "q1972.dat",
  "q1973.dat",
  "q1974.dat",
  "q1975.dat",
  "q1976.dat",
  "q1977.dat",
  "q1978.dat",
  "q1979.dat",
  "q1980.dat",
  "q1981.dat",
  "q1982.dat",
  "q1983.dat",
  "q1984.dat",
  "q1985.dat",
  "q1986.dat",
  "q1987.dat",
  "q1988.dat",
  "q1989.dat",
  "q1990.dat",
  "q1991.dat",
  "q1992.dat",
  "q1993.dat",
  "q1994.dat",
  "q1995.dat",
  "q1996.dat",
  "q1997.dat",
  "q1998.dat",
  "q1999.dat",
  "q2000.dat"
};
///Files
const char AllwS_plot[MAXESSAY][100]={
  "AllwS_1.dat",
  "AllwS_2.dat",
  "AllwS_3.dat",
  "AllwS_4.dat",
  "AllwS_5.dat",
  "AllwS_6.dat",
  "AllwS_7.dat",
  "AllwS_8.dat",
  "AllwS_9.dat",
  "AllwS_10.dat",
  "AllwS_11.dat",
  "AllwS_12.dat",
  "AllwS_13.dat",
  "AllwS_14.dat",
  "AllwS_15.dat",
  "AllwS_16.dat",
  "AllwS_17.dat",
  "AllwS_18.dat",
  "AllwS_19.dat",
  "AllwS_20.dat",
  "AllwS_21.dat",
  "AllwS_22.dat",
  "AllwS_23.dat",
  "AllwS_24.dat",
  "AllwS_25.dat",
  "AllwS_26.dat",
  "AllwS_27.dat",
  "AllwS_28.dat",
  "AllwS_29.dat",
  "AllwS_30.dat",
  "AllwS_31.dat",
  "AllwS_32.dat",
  "AllwS_33.dat",
  "AllwS_34.dat",
  "AllwS_35.dat",
  "AllwS_36.dat",
  "AllwS_37.dat",
  "AllwS_38.dat",
  "AllwS_39.dat",
  "AllwS_40.dat",
  "AllwS_41.dat",
  "AllwS_42.dat",
  "AllwS_43.dat",
  "AllwS_44.dat",
  "AllwS_45.dat",
  "AllwS_46.dat",
  "AllwS_47.dat",
  "AllwS_48.dat",
  "AllwS_49.dat",
  "AllwS_50.dat",
  "AllwS_51.dat",
  "AllwS_52.dat",
  "AllwS_53.dat",
  "AllwS_54.dat",
  "AllwS_55.dat",
  "AllwS_56.dat",
  "AllwS_57.dat",
  "AllwS_58.dat",
  "AllwS_59.dat",
  "AllwS_60.dat",
  "AllwS_61.dat",
  "AllwS_62.dat",
  "AllwS_63.dat",
  "AllwS_64.dat",
  "AllwS_65.dat",
  "AllwS_66.dat",
  "AllwS_67.dat",
  "AllwS_68.dat",
  "AllwS_69.dat",
  "AllwS_70.dat",
  "AllwS_71.dat",
  "AllwS_72.dat"
};
const char CSize_plot[MAXESSAY][100]={
  "CSize_1.dat",
  "CSize_2.dat",
  "CSize_3.dat",
  "CSize_4.dat",
  "CSize_5.dat",
  "CSize_6.dat",
  "CSize_7.dat",
  "CSize_8.dat",
  "CSize_9.dat",
  "CSize_10.dat",
  "CSize_11.dat",
  "CSize_12.dat",
  "CSize_13.dat",
  "CSize_14.dat",
  "CSize_15.dat",
  "CSize_16.dat",
  "CSize_17.dat",
  "CSize_18.dat",
  "CSize_19.dat",
  "CSize_20.dat",
  "CSize_21.dat",
  "CSize_22.dat",
  "CSize_23.dat",
  "CSize_24.dat",
  "CSize_25.dat",
  "CSize_26.dat",
  "CSize_27.dat",
  "CSize_28.dat",
  "CSize_29.dat",
  "CSize_30.dat",
  "CSize_31.dat",
  "CSize_32.dat",
  "CSize_33.dat",
  "CSize_34.dat",
  "CSize_35.dat",
  "CSize_36.dat",
  "CSize_37.dat",
  "CSize_38.dat",
  "CSize_39.dat",
  "CSize_40.dat",
  "CSize_41.dat",
  "CSize_42.dat",
  "CSize_43.dat",
  "CSize_44.dat",
  "CSize_45.dat",
  "CSize_46.dat",
  "CSize_47.dat",
  "CSize_48.dat",
  "CSize_49.dat",
  "CSize_50.dat",
  "CSize_51.dat",
  "CSize_52.dat",
  "CSize_53.dat",
  "CSize_54.dat",
  "CSize_55.dat",
  "CSize_56.dat",
  "CSize_57.dat",
  "CSize_58.dat",
  "CSize_59.dat",
  "CSize_60.dat",
  "CSize_61.dat",
  "CSize_62.dat",
  "CSize_63.dat",
  "CSize_64.dat",
  "CSize_65.dat",
  "CSize_66.dat",
  "CSize_67.dat",
  "CSize_68.dat",
  "CSize_69.dat",
  "CSize_70.dat",
  "CSize_71.dat",
  "CSize_72.dat"
};
// in y
const char entretotaly_plot[MAXESSAY][100]={
  "entretotaly_1.dat",
  "entretotaly_2.dat",
  "entretotaly_3.dat",
  "entretotaly_4.dat",
  "entretotaly_5.dat",
  "entretotaly_6.dat",
  "entretotaly_7.dat",
  "entretotaly_8.dat",
  "entretotaly_9.dat",
  "entretotaly_10.dat",
  "entretotaly_11.dat",
  "entretotaly_12.dat",
  "entretotaly_13.dat",
  "entretotaly_14.dat",
  "entretotaly_15.dat",
  "entretotaly_16.dat",
  "entretotaly_17.dat",
  "entretotaly_18.dat",
  "entretotaly_19.dat",
  "entretotaly_20.dat",
  "entretotaly_21.dat",
  "entretotaly_22.dat",
  "entretotaly_23.dat",
  "entretotaly_24.dat",
  "entretotaly_25.dat",
  "entretotaly_26.dat",
  "entretotaly_27.dat",
  "entretotaly_28.dat",
  "entretotaly_29.dat",
  "entretotaly_30.dat",
  "entretotaly_31.dat",
  "entretotaly_32.dat",
  "entretotaly_33.dat",
  "entretotaly_34.dat",
  "entretotaly_35.dat",
  "entretotaly_36.dat",
  "entretotaly_37.dat",
  "entretotaly_38.dat",
  "entretotaly_39.dat",
  "entretotaly_40.dat",
  "entretotaly_41.dat",
  "entretotaly_42.dat",
  "entretotaly_43.dat",
  "entretotaly_44.dat",
  "entretotaly_45.dat",
  "entretotaly_46.dat",
  "entretotaly_47.dat",
  "entretotaly_48.dat",
  "entretotaly_49.dat",
  "entretotaly_50.dat",
  "entretotaly_51.dat",
  "entretotaly_52.dat",
  "entretotaly_53.dat",
  "entretotaly_54.dat",
  "entretotaly_55.dat",
  "entretotaly_56.dat",
  "entretotaly_57.dat",
  "entretotaly_58.dat",
  "entretotaly_59.dat",
  "entretotaly_60.dat",
  "entretotaly_61.dat",
  "entretotaly_62.dat",
  "entretotaly_63.dat",
  "entretotaly_64.dat",
  "entretotaly_65.dat",
  "entretotaly_66.dat",
  "entretotaly_67.dat",
  "entretotaly_68.dat",
  "entretotaly_69.dat",
  "entretotaly_70.dat",
  "entretotaly_71.dat",
  "entretotaly_72.dat"
};


//*******

//entretotal
const char grain_plot[MAXESSAY][100]={
  "grain_1.dat",
  "grain_2.dat",
  "grain_3.dat",
  "grain_4.dat",
  "grain_5.dat",
  "grain_6.dat",
  "grain_7.dat",
  "grain_8.dat",
  "grain_9.dat",
  "grain_10.dat",
  "grain_11.dat",
  "grain_12.dat",
  "grain_13.dat",
  "grain_14.dat",
  "grain_15.dat",
  "grain_16.dat",
  "grain_17.dat",
  "grain_18.dat",
  "grain_19.dat",
  "grain_20.dat",
  "grain_21.dat",
  "grain_22.dat",
  "grain_23.dat",
  "grain_24.dat",
  "grain_25.dat",
  "grain_26.dat",
  "grain_27.dat",
  "grain_28.dat",
  "grain_29.dat",
  "grain_30.dat",
  "grain_31.dat",
  "grain_32.dat",
  "grain_33.dat",
  "grain_34.dat",
  "grain_35.dat",
  "grain_36.dat",
  "grain_37.dat",
  "grain_38.dat",
  "grain_39.dat",
  "grain_40.dat",
  "grain_41.dat",
  "grain_42.dat",
  "grain_43.dat",
  "grain_44.dat",
  "grain_45.dat",
  "grain_46.dat",
  "grain_47.dat",
  "grain_48.dat",
  "grain_49.dat",
  "grain_50.dat",
  "grain_51.dat",
  "grain_52.dat",
  "grain_53.dat",
  "grain_54.dat",
  "grain_55.dat",
  "grain_56.dat",
  "grain_57.dat",
  "grain_58.dat",
  "grain_59.dat",
  "grain_60.dat",
  "grain_61.dat",
  "grain_62.dat",
  "grain_63.dat",
  "grain_64.dat",
  "grain_65.dat",
  "grain_66.dat",
  "grain_67.dat",
  "grain_68.dat",
  "grain_69.dat",
  "grain_70.dat",
  "grain_71.dat",
  "grain_72.dat"
};
//
const char entretotal_plot[MAXESSAY][100]={
  "entretotal_1.dat",
  "entretotal_2.dat",
  "entretotal_3.dat",
  "entretotal_4.dat",
  "entretotal_5.dat",
  "entretotal_6.dat",
  "entretotal_7.dat",
  "entretotal_8.dat",
  "entretotal_9.dat",
  "entretotal_10.dat",
  "entretotal_11.dat",
  "entretotal_12.dat",
  "entretotal_13.dat",
  "entretotal_14.dat",
  "entretotal_15.dat",
  "entretotal_16.dat",
  "entretotal_17.dat",
  "entretotal_18.dat",
  "entretotal_19.dat",
  "entretotal_20.dat",
  "entretotal_21.dat",
  "entretotal_22.dat",
  "entretotal_23.dat",
  "entretotal_24.dat",
  "entretotal_25.dat",
  "entretotal_26.dat",
  "entretotal_27.dat",
  "entretotal_28.dat",
  "entretotal_29.dat",
  "entretotal_30.dat",
  "entretotal_31.dat",
  "entretotal_32.dat",
  "entretotal_33.dat",
  "entretotal_34.dat",
  "entretotal_35.dat",
  "entretotal_36.dat",
  "entretotal_37.dat",
  "entretotal_38.dat",
  "entretotal_39.dat",
  "entretotal_40.dat",
  "entretotal_41.dat",
  "entretotal_42.dat",
  "entretotal_43.dat",
  "entretotal_44.dat",
  "entretotal_45.dat",
  "entretotal_46.dat",
  "entretotal_47.dat",
  "entretotal_48.dat",
  "entretotal_49.dat",
  "entretotal_50.dat",
  "entretotal_51.dat",
  "entretotal_52.dat",
  "entretotal_53.dat",
  "entretotal_54.dat",
  "entretotal_55.dat",
  "entretotal_56.dat",
  "entretotal_57.dat",
  "entretotal_58.dat",
  "entretotal_59.dat",
  "entretotal_60.dat",
  "entretotal_61.dat",
  "entretotal_62.dat",
  "entretotal_63.dat",
  "entretotal_64.dat",
  "entretotal_65.dat",
  "entretotal_66.dat",
  "entretotal_67.dat",
  "entretotal_68.dat",
  "entretotal_69.dat",
  "entretotal_70.dat",
  "entretotal_71.dat",
  "entretotal_72.dat"
};

//

///
const char f_r_plot[MAXESSAY][100]={
  "f_r_1.dat",
  "f_r_2.dat",
  "f_r_3.dat",
  "f_r_4.dat",
  "f_r_5.dat",
  "f_r_6.dat",
  "f_r_7.dat",
  "f_r_8.dat",
  "f_r_9.dat",
  "f_r_10.dat",
  "f_r_11.dat",
  "f_r_12.dat",
  "f_r_13.dat",
  "f_r_14.dat",
  "f_r_15.dat",
  "f_r_16.dat",
  "f_r_17.dat",
  "f_r_18.dat",
  "f_r_19.dat",
  "f_r_20.dat",
  "f_r_21.dat",
  "f_r_22.dat",
  "f_r_23.dat",
  "f_r_24.dat",
  "f_r_25.dat",
  "f_r_26.dat",
  "f_r_27.dat",
  "f_r_28.dat",
  "f_r_29.dat",
  "f_r_30.dat",
  "f_r_31.dat",
  "f_r_32.dat",
  "f_r_33.dat",
  "f_r_34.dat",
  "f_r_35.dat",
  "f_r_36.dat",
  "f_r_37.dat",
  "f_r_38.dat",
  "f_r_39.dat",
  "f_r_40.dat",
  "f_r_41.dat",
  "f_r_42.dat",
  "f_r_43.dat",
  "f_r_44.dat",
  "f_r_45.dat",
  "f_r_46.dat",
  "f_r_47.dat",
  "f_r_48.dat",
  "f_r_49.dat",
  "f_r_50.dat",
  "f_r_51.dat",
  "f_r_52.dat",
  "f_r_53.dat",
  "f_r_54.dat",
  "f_r_55.dat",
  "f_r_56.dat",
  "f_r_57.dat",
  "f_r_58.dat",
  "f_r_59.dat",
  "f_r_60.dat",
  "f_r_61.dat",
  "f_r_62.dat",
  "f_r_63.dat",
  "f_r_64.dat",
  "f_r_65.dat",
  "f_r_66.dat",
  "f_r_67.dat",
  "f_r_68.dat",
  "f_r_69.dat",
  "f_r_70.dat",
  "f_r_71.dat",
  "f_r_72.dat"
};
///
//EvalRdf
const char EvalRdf_plot[MAXESSAY][100]={
  "EvalRdf_1.dat",
  "EvalRdf_2.dat",
  "EvalRdf_3.dat",
  "EvalRdf_4.dat",
  "EvalRdf_5.dat",
  "EvalRdf_6.dat",
  "EvalRdf_7.dat",
  "EvalRdf_8.dat",
  "EvalRdf_9.dat",
  "EvalRdf_10.dat",
  "EvalRdf_11.dat",
  "EvalRdf_12.dat",
  "EvalRdf_13.dat",
  "EvalRdf_14.dat",
  "EvalRdf_15.dat",
  "EvalRdf_16.dat",
  "EvalRdf_17.dat",
  "EvalRdf_18.dat",
  "EvalRdf_19.dat",
  "EvalRdf_20.dat",
  "EvalRdf_21.dat",
  "EvalRdf_22.dat",
  "EvalRdf_23.dat",
  "EvalRdf_24.dat",
  "EvalRdf_25.dat",
  "EvalRdf_26.dat",
  "EvalRdf_27.dat",
  "EvalRdf_28.dat",
  "EvalRdf_29.dat",
  "EvalRdf_30.dat",
  "EvalRdf_31.dat",
  "EvalRdf_32.dat",
  "EvalRdf_33.dat",
  "EvalRdf_34.dat",
  "EvalRdf_35.dat",
  "EvalRdf_36.dat",
  "EvalRdf_37.dat",
  "EvalRdf_38.dat",
  "EvalRdf_39.dat",
  "EvalRdf_40.dat",
  "EvalRdf_41.dat",
  "EvalRdf_42.dat",
  "EvalRdf_43.dat",
  "EvalRdf_44.dat",
  "EvalRdf_45.dat",
  "EvalRdf_46.dat",
  "EvalRdf_47.dat",
  "EvalRdf_48.dat",
  "EvalRdf_49.dat",
  "EvalRdf_50.dat",
  "EvalRdf_51.dat",
  "EvalRdf_52.dat",
  "EvalRdf_53.dat",
  "EvalRdf_54.dat",
  "EvalRdf_55.dat",
  "EvalRdf_56.dat",
  "EvalRdf_57.dat",
  "EvalRdf_58.dat",
  "EvalRdf_59.dat",
  "EvalRdf_60.dat",
  "EvalRdf_61.dat",
  "EvalRdf_62.dat",
  "EvalRdf_63.dat",
  "EvalRdf_64.dat",
  "EvalRdf_65.dat",
  "EvalRdf_66.dat",
  "EvalRdf_67.dat",
  "EvalRdf_68.dat",
  "EvalRdf_69.dat",
  "EvalRdf_70.dat",
  "EvalRdf_71.dat",
  "EvalRdf_72.dat"
};
//codigo
const char wobs_plot[MAXESSAY][100]={
  "wobs_1.dat",
  "wobs_2.dat",
  "wobs_3.dat",
  "wobs_4.dat",
  "wobs_5.dat",
  "wobs_6.dat",
  "wobs_7.dat",
  "wobs_8.dat",
  "wobs_9.dat",
  "wobs_10.dat",
  "wobs_11.dat",
  "wobs_12.dat",
  "wobs_13.dat",
  "wobs_14.dat",
  "wobs_15.dat",
  "wobs_16.dat",
  "wobs_17.dat",
  "wobs_18.dat",
  "wobs_19.dat",
  "wobs_20.dat",
  "wobs_21.dat",
  "wobs_22.dat",
  "wobs_23.dat",
  "wobs_24.dat",
  "wobs_25.dat",
  "wobs_26.dat",
  "wobs_27.dat",
  "wobs_28.dat",
  "wobs_29.dat",
  "wobs_30.dat",
  "wobs_31.dat",
  "wobs_32.dat",
  "wobs_33.dat",
  "wobs_34.dat",
  "wobs_35.dat",
  "wobs_36.dat",
  "wobs_37.dat",
  "wobs_38.dat",
  "wobs_39.dat",
  "wobs_40.dat",
  "wobs_41.dat",
  "wobs_42.dat",
  "wobs_43.dat",
  "wobs_44.dat",
  "wobs_45.dat",
  "wobs_46.dat",
  "wobs_47.dat",
  "wobs_48.dat",
  "wobs_49.dat",
  "wobs_50.dat",
  "wobs_51.dat",
  "wobs_52.dat",
  "wobs_53.dat",
  "wobs_54.dat",
  "wobs_55.dat",
  "wobs_56.dat",
  "wobs_57.dat",
  "wobs_58.dat",
  "wobs_59.dat",
  "wobs_60.dat",
  "wobs_61.dat",
  "wobs_62.dat",
  "wobs_63.dat",
  "wobs_64.dat",
  "wobs_65.dat",
  "wobs_66.dat",
  "wobs_67.dat",
  "wobs_68.dat",
  "wobs_69.dat",
  "wobs_70.dat",
  "wobs_71.dat",
  "wobs_72.dat"
};
//Super wobs
const char Superwobs_plot[MAXESSAY][100]={
  "Superwobs_1.dat",
  "Superwobs_2.dat",
  "Superwobs_3.dat",
  "Superwobs_4.dat",
  "Superwobs_5.dat",
  "Superwobs_6.dat",
  "Superwobs_7.dat",
  "Superwobs_8.dat",
  "Superwobs_9.dat",
  "Superwobs_10.dat",
  "Superwobs_11.dat",
  "Superwobs_12.dat",
  "Superwobs_13.dat",
  "Superwobs_14.dat",
  "Superwobs_15.dat",
  "Superwobs_16.dat",
  "Superwobs_17.dat",
  "Superwobs_18.dat",
  "Superwobs_19.dat",
  "Superwobs_20.dat",
  "Superwobs_21.dat",
  "Superwobs_22.dat",
  "Superwobs_23.dat",
  "Superwobs_24.dat",
  "Superwobs_25.dat",
  "Superwobs_26.dat",
  "Superwobs_27.dat",
  "Superwobs_28.dat",
  "Superwobs_29.dat",
  "Superwobs_30.dat",
  "Superwobs_31.dat",
  "Superwobs_32.dat",
  "Superwobs_33.dat",
  "Superwobs_34.dat",
  "Superwobs_35.dat",
  "Superwobs_36.dat",
  "Superwobs_37.dat",
  "Superwobs_38.dat",
  "Superwobs_39.dat",
  "Superwobs_40.dat",
  "Superwobs_41.dat",
  "Superwobs_42.dat",
  "Superwobs_43.dat",
  "Superwobs_44.dat",
  "Superwobs_45.dat",
  "Superwobs_46.dat",
  "Superwobs_47.dat",
  "Superwobs_48.dat",
  "Superwobs_49.dat",
  "Superwobs_50.dat",
  "Superwobs_51.dat",
  "Superwobs_52.dat",
  "Superwobs_53.dat",
  "Superwobs_54.dat",
  "Superwobs_55.dat",
  "Superwobs_56.dat",
  "Superwobs_57.dat",
  "Superwobs_58.dat",
  "Superwobs_59.dat",
  "Superwobs_60.dat",
  "Superwobs_61.dat",
  "Superwobs_62.dat",
  "Superwobs_63.dat",
  "Superwobs_64.dat",
  "Superwobs_65.dat",
  "Superwobs_66.dat",
  "Superwobs_67.dat",
  "Superwobs_68.dat",
  "Superwobs_69.dat",
  "Superwobs_70.dat",
  "Superwobs_71.dat",
  "Superwobs_72.dat"
};
//Phi_Controle
const char Phi_Controle_plot[MAXESSAY][100]={
  "Phi_Controle_1.dat",
  "Phi_Controle_2.dat",
  "Phi_Controle_3.dat",
  "Phi_Controle_4.dat",
  "Phi_Controle_5.dat",
  "Phi_Controle_6.dat",
  "Phi_Controle_7.dat",
  "Phi_Controle_8.dat",
  "Phi_Controle_9.dat",
  "Phi_Controle_10.dat",
  "Phi_Controle_11.dat",
  "Phi_Controle_12.dat",
  "Phi_Controle_13.dat",
  "Phi_Controle_14.dat",
  "Phi_Controle_15.dat",
  "Phi_Controle_16.dat",
  "Phi_Controle_17.dat",
  "Phi_Controle_18.dat",
  "Phi_Controle_19.dat",
  "Phi_Controle_20.dat",
  "Phi_Controle_21.dat",
  "Phi_Controle_22.dat",
  "Phi_Controle_23.dat",
  "Phi_Controle_24.dat",
  "Phi_Controle_25.dat",
  "Phi_Controle_26.dat",
  "Phi_Controle_27.dat",
  "Phi_Controle_28.dat",
  "Phi_Controle_29.dat",
  "Phi_Controle_30.dat",
  "Phi_Controle_31.dat",
  "Phi_Controle_32.dat",
  "Phi_Controle_33.dat",
  "Phi_Controle_34.dat",
  "Phi_Controle_35.dat",
  "Phi_Controle_36.dat",
  "Phi_Controle_37.dat",
  "Phi_Controle_38.dat",
  "Phi_Controle_39.dat",
  "Phi_Controle_40.dat",
  "Phi_Controle_41.dat",
  "Phi_Controle_42.dat",
  "Phi_Controle_43.dat",
  "Phi_Controle_44.dat",
  "Phi_Controle_45.dat",
  "Phi_Controle_46.dat",
  "Phi_Controle_47.dat",
  "Phi_Controle_48.dat",
  "Phi_Controle_49.dat",
  "Phi_Controle_50.dat",
  "Phi_Controle_51.dat",
  "Phi_Controle_52.dat",
  "Phi_Controle_53.dat",
  "Phi_Controle_54.dat",
  "Phi_Controle_55.dat",
  "Phi_Controle_56.dat",
  "Phi_Controle_57.dat",
  "Phi_Controle_58.dat",
  "Phi_Controle_59.dat",
  "Phi_Controle_60.dat",
  "Phi_Controle_61.dat",
  "Phi_Controle_62.dat",
  "Phi_Controle_63.dat",
  "Phi_Controle_64.dat",
  "Phi_Controle_65.dat",
  "Phi_Controle_66.dat",
  "Phi_Controle_67.dat",
  "Phi_Controle_68.dat",
  "Phi_Controle_69.dat",
  "Phi_Controle_70.dat",
  "Phi_Controle_71.dat",
  "Phi_Controle_72.dat"
};
//wobs.dat
const char Mobility_plot[MAXESSAY][100]={
  "Mobility_1.dat",
  "Mobility_2.dat",
  "Mobility_3.dat",
  "Mobility_4.dat",
  "Mobility_5.dat",
  "Mobility_6.dat",
  "Mobility_7.dat",
  "Mobility_8.dat",
  "Mobility_9.dat",
  "Mobility_10.dat",
  "Mobility_11.dat",
  "Mobility_12.dat",
  "Mobility_13.dat",
  "Mobility_14.dat",
  "Mobility_15.dat",
  "Mobility_16.dat",
  "Mobility_17.dat",
  "Mobility_18.dat",
  "Mobility_19.dat",
  "Mobility_20.dat",
  "Mobility_21.dat",
  "Mobility_22.dat",
  "Mobility_23.dat",
  "Mobility_24.dat",
  "Mobility_25.dat",
  "Mobility_26.dat",
  "Mobility_27.dat",
  "Mobility_28.dat",
  "Mobility_29.dat",
  "Mobility_30.dat",
  "Mobility_31.dat",
  "Mobility_32.dat",
  "Mobility_33.dat",
  "Mobility_34.dat",
  "Mobility_35.dat",
  "Mobility_36.dat",
  "Mobility_37.dat",
  "Mobility_38.dat",
  "Mobility_39.dat",
  "Mobility_40.dat",
  "Mobility_41.dat",
  "Mobility_42.dat",
  "Mobility_43.dat",
  "Mobility_44.dat",
  "Mobility_45.dat",
  "Mobility_46.dat",
  "Mobility_47.dat",
  "Mobility_48.dat",
  "Mobility_49.dat",
  "Mobility_50.dat",
  "Mobility_51.dat",
  "Mobility_52.dat",
  "Mobility_53.dat",
  "Mobility_54.dat",
  "Mobility_55.dat",
  "Mobility_56.dat",
  "Mobility_57.dat",
  "Mobility_58.dat",
  "Mobility_59.dat",
  "Mobility_60.dat",
  "Mobility_61.dat",
  "Mobility_62.dat",
  "Mobility_63.dat",
  "Mobility_64.dat",
  "Mobility_65.dat",
  "Mobility_66.dat",
  "Mobility_67.dat",
  "Mobility_68.dat",
  "Mobility_69.dat",
  "Mobility_70.dat",
  "Mobility_71.dat",
  "Mobility_72.dat"
};


//blocks
const char blocks_plot[MAXESSAY][100]={
  "blocks_1.dat",
  "blocks_2.dat",
  "blocks_3.dat",
  "blocks_4.dat",
  "blocks_5.dat",
  "blocks_6.dat",
  "blocks_7.dat",
  "blocks_8.dat",
  "blocks_9.dat",
  "blocks_10.dat",
  "blocks_11.dat",
  "blocks_12.dat",
  "blocks_13.dat",
  "blocks_14.dat",
  "blocks_15.dat",
  "blocks_16.dat",
  "blocks_17.dat",
  "blocks_18.dat",
  "blocks_19.dat",
  "blocks_20.dat",
  "blocks_21.dat",
  "blocks_22.dat",
  "blocks_23.dat",
  "blocks_24.dat",
  "blocks_25.dat",
  "blocks_26.dat",
  "blocks_27.dat",
  "blocks_28.dat",
  "blocks_29.dat",
  "blocks_30.dat",
  "blocks_31.dat",
  "blocks_32.dat",
  "blocks_33.dat",
  "blocks_34.dat",
  "blocks_35.dat",
  "blocks_36.dat",
  "blocks_37.dat",
  "blocks_38.dat",
  "blocks_39.dat",
  "blocks_40.dat",
  "blocks_41.dat",
  "blocks_42.dat",
  "blocks_43.dat",
  "blocks_44.dat",
  "blocks_45.dat",
  "blocks_46.dat",
  "blocks_47.dat",
  "blocks_48.dat",
  "blocks_49.dat",
  "blocks_50.dat",
  "blocks_51.dat",
  "blocks_52.dat",
  "blocks_53.dat",
  "blocks_54.dat",
  "blocks_55.dat",
  "blocks_56.dat",
  "blocks_57.dat",
  "blocks_58.dat",
  "blocks_59.dat",
  "blocks_60.dat",
  "blocks_61.dat",
  "blocks_62.dat",
  "blocks_63.dat",
  "blocks_64.dat",
  "blocks_65.dat",
  "blocks_66.dat",
  "blocks_67.dat",
  "blocks_68.dat",
  "blocks_69.dat",
  "blocks_70.dat",
  "blocks_71.dat",
  "blocks_72.dat"
};
//wobs_u.dat


//Fiel.dat
const char Field_plot[MAXESSAY][100]={
  "Field_1.dat",
  "Field_2.dat",
  "Field_3.dat",
  "Field_4.dat",
  "Field_5.dat",
  "Field_6.dat",
  "Field_7.dat",
  "Field_8.dat",
  "Field_9.dat",
  "Field_10.dat",
  "Field_11.dat",
  "Field_12.dat",
  "Field_13.dat",
  "Field_14.dat",
  "Field_15.dat",
  "Field_16.dat",
  "Field_17.dat",
  "Field_18.dat",
  "Field_19.dat",
  "Field_20.dat",
  "Field_21.dat",
  "Field_22.dat",
  "Field_23.dat",
  "Field_24.dat",
  "Field_25.dat",
  "Field_26.dat",
  "Field_27.dat",
  "Field_28.dat",
  "Field_29.dat",
  "Field_30.dat",
  "Field_31.dat",
  "Field_32.dat",
  "Field_33.dat",
  "Field_34.dat",
  "Field_35.dat",
  "Field_36.dat",
  "Field_37.dat",
  "Field_38.dat",
  "Field_39.dat",
  "Field_40.dat",
  "Field_41.dat",
  "Field_42.dat",
  "Field_43.dat",
  "Field_44.dat",
  "Field_45.dat",
  "Field_46.dat",
  "Field_47.dat",
  "Field_48.dat",
  "Field_49.dat",
  "Field_50.dat",
  "Field_51.dat",
  "Field_52.dat",
  "Field_53.dat",
  "Field_54.dat",
  "Field_55.dat",
  "Field_56.dat",
  "Field_57.dat",
  "Field_58.dat",
  "Field_59.dat",
  "Field_60.dat",
  "Field_61.dat",
  "Field_62.dat",
  "Field_63.dat",
  "Field_64.dat",
  "Field_65.dat",
  "Field_66.dat",
  "Field_67.dat",
  "Field_68.dat",
  "Field_69.dat",
  "Field_70.dat",
  "Field_71.dat",
  "Field_72.dat"
};


//psi.dat
const char psi_plot[MAXESSAY][100]={
  "psi_1.dat",
  "psi_2.dat",
  "psi_3.dat",
  "psi_4.dat",
  "psi_5.dat",
  "psi_6.dat",
  "psi_7.dat",
  "psi_8.dat",
  "psi_9.dat",
  "psi_10.dat",
  "psi_11.dat",
  "psi_12.dat",
  "psi_13.dat",
  "psi_14.dat",
  "psi_15.dat",
  "psi_16.dat",
  "psi_17.dat",
  "psi_18.dat",
  "psi_19.dat",
  "psi_20.dat",
  "psi_21.dat",
  "psi_22.dat",
  "psi_23.dat",
  "psi_24.dat",
  "psi_25.dat",
  "psi_26.dat",
  "psi_27.dat",
  "psi_28.dat",
  "psi_29.dat",
  "psi_30.dat",
  "psi_31.dat",
  "psi_32.dat",
  "psi_33.dat",
  "psi_34.dat",
  "psi_35.dat",
  "psi_36.dat",
  "psi_37.dat",
  "psi_38.dat",
  "psi_39.dat",
  "psi_40.dat",
  "psi_41.dat",
  "psi_42.dat",
  "psi_43.dat",
  "psi_44.dat",
  "psi_45.dat",
  "psi_46.dat",
  "psi_47.dat",
  "psi_48.dat",
  "psi_49.dat",
  "psi_50.dat",
  "psi_51.dat",
  "psi_52.dat",
  "psi_53.dat",
  "psi_54.dat",
  "psi_55.dat",
  "psi_56.dat",
  "psi_57.dat",
  "psi_58.dat",
  "psi_59.dat",
  "psi_60.dat",
  "psi_61.dat",
  "psi_62.dat",
  "psi_63.dat",
  "psi_64.dat",
  "psi_65.dat",
  "psi_66.dat",
  "psi_67.dat",
  "psi_68.dat",
  "psi_69.dat",
  "psi_70.dat",
  "psi_71.dat",
  "psi_72.dat"
};


//phi_field.dat
const char PHI_FIELD_plot[MAXESSAY][100]={
  "PHI_FIELD_1.dat",
  "PHI_FIELD_2.dat",
  "PHI_FIELD_3.dat",
  "PHI_FIELD_4.dat",
  "PHI_FIELD_5.dat",
  "PHI_FIELD_6.dat",
  "PHI_FIELD_7.dat",
  "PHI_FIELD_8.dat",
  "PHI_FIELD_9.dat",
  "PHI_FIELD_10.dat",
  "PHI_FIELD_11.dat",
  "PHI_FIELD_12.dat",
  "PHI_FIELD_13.dat",
  "PHI_FIELD_14.dat",
  "PHI_FIELD_15.dat",
  "PHI_FIELD_16.dat",
  "PHI_FIELD_17.dat",
  "PHI_FIELD_18.dat",
  "PHI_FIELD_19.dat",
  "PHI_FIELD_20.dat",
  "PHI_FIELD_21.dat",
  "PHI_FIELD_22.dat",
  "PHI_FIELD_23.dat",
  "PHI_FIELD_24.dat",
  "PHI_FIELD_25.dat",
  "PHI_FIELD_26.dat",
  "PHI_FIELD_27.dat",
  "PHI_FIELD_28.dat",
  "PHI_FIELD_29.dat",
  "PHI_FIELD_30.dat",
  "PHI_FIELD_31.dat",
  "PHI_FIELD_32.dat",
  "PHI_FIELD_33.dat",
  "PHI_FIELD_34.dat",
  "PHI_FIELD_35.dat",
  "PHI_FIELD_36.dat",
  "PHI_FIELD_37.dat",
  "PHI_FIELD_38.dat",
  "PHI_FIELD_39.dat",
  "PHI_FIELD_40.dat",
  "PHI_FIELD_41.dat",
  "PHI_FIELD_42.dat",
  "PHI_FIELD_43.dat",
  "PHI_FIELD_44.dat",
  "PHI_FIELD_45.dat",
  "PHI_FIELD_46.dat",
  "PHI_FIELD_47.dat",
  "PHI_FIELD_48.dat",
  "PHI_FIELD_49.dat",
  "PHI_FIELD_50.dat",
  "PHI_FIELD_51.dat",
  "PHI_FIELD_52.dat",
  "PHI_FIELD_53.dat",
  "PHI_FIELD_54.dat",
  "PHI_FIELD_55.dat",
  "PHI_FIELD_56.dat",
  "PHI_FIELD_57.dat",
  "PHI_FIELD_58.dat",
  "PHI_FIELD_59.dat",
  "PHI_FIELD_60.dat",
  "PHI_FIELD_61.dat",
  "PHI_FIELD_62.dat",
  "PHI_FIELD_63.dat",
  "PHI_FIELD_64.dat",
  "PHI_FIELD_65.dat",
  "PHI_FIELD_66.dat",
  "PHI_FIELD_67.dat",
  "PHI_FIELD_68.dat",
  "PHI_FIELD_69.dat",
  "PHI_FIELD_70.dat",
  "PHI_FIELD_71.dat",
  "PHI_FIELD_72.dat"
};

///ESSAY FILES
//#define MAXMEASURE 


//OBSNOBS.dat




#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>
//#include"/usr/local/dislin/dislin.h"
#define mkstr(s) #s
typedef enum {N_I, N_R} VType;
typedef double  real;
typedef struct {
char *vName;
void *vPtr;
VType vType;
int vLen, vStatus;
} NameList;

//Macros
# define AMAG  843314861
# define BMAG 453816693
# define CMAG  65539
# define IMAX 1073741824   ///ERRO
// Length Definetion
//# define LBOX  70.
# define DCluster  1.
# define PI 3.1415927
//Time definetion
//#define NMEAS 1//number of data from 
//>>>>>>>>#define NSTEPS 40000//600000//+0 not necessary to de??????

#define NULL_INT -1
#define NUMOOFSET 5
#define BAR "///////////////////////////////////////////////////////////"
#define BART "//\t\t\t\t\t\t\t//\n"

#define  NUMPATITIONF 200 
#define MMFSY 87
#define MMFSX 87
#define Q 7
#define NMEAS 1000
#define NMEAS_STATE 100
#define FNUM 30
#define MAXF 200
#define IN1 "%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n"
//#define IN1 "%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\taaaa%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n"
//#define CY_BE 5000000;
//#define CY_AF 5500000;
//#define NOBS 16
#define WCT 800
#define FSW1 "W_matrix.dat"
#define Fprob "prob.dat"
#define Fqrob "qrrob.dat"
#define Fessay "OverEs.dat"
#define F_FIELD "Field.dat"
#define YES 1
#define NO 0
#define NNP 4
#define NNQ 5
#define NNP2 9
#define NNQ2 10
#define NMEAS_ALPHA 1000
#define NameI(x) {#x, &x, N_I, sizeof (x) / sizeof (int)}
#define NameR(x) {#x, &x, N_R, sizeof (x) / sizeof (real)}
#define NP_I ((int *) (nameList[k].vPtr) + j)
#define NP_R ((real *) (nameList[k].vPtr) + j)
// FINISH  MACRO PARAMETERS



// begin macro_support
#define VAdd(v1,v2,v3)	       \
  (v1).x=(v2).x+(v3).x,	       \
    (v1).y=(v2).y+(v3).y
#define VSub(v1,v2,v3)           \
  (v1).x=(v2).x-(v3).x,		 \
    (v1).y=(v2).y-(v3).y
#define VSAdp(v1,v2,v3,s)				\
  (v1).x=(v2).x+(s)*(v3).x,				\
    (v1).y=(v2).y+(s)*(v3).y

#define VDot(v1,v2)                 \
((v1).x*(v2).x+(v1).y*(v2).y)
#define VExt(v1,v2)				\
  ((v1).x*(v2).y-(v1).y*(v2).x)
#define VAdd_H(v,v1) (v1).x=(v).theta
#define Vset(v,sx,sy)                \
  (v).x=sx,                      \
    (v).y=sy
#define VsetTrue(v1,v2)				\
  (v1).x=(v2).x,    \
    (v1).y=(v2).y
#define Vtheta(v,s)    \
(v).theta=s
#define Vtop(r1,r2,v,s)   \
  r1=(1./s)*(v).x ,	  \
    r2=(1./s)*(v).y
#define VProduct(v1,v2,v3)     \
  (v1).x=(v2).x*(v3).x,        \
    (v1).y=(v2).y*(v3).y
#define VDiv(v1,v2,s)				\
  (v1).x=(s)*(v2).x,				\
    (v1).y=(s)*(v2).y
#define VsetAll(v,s)          Vset(v,s,s)
#define VZero(v)             VsetAll(v,0)
#define VVAdd(v1,v2)         VAdd(v1,v1,v2)
#define VVSadp(v1,v3,s)      VSAdp(v1,v1,v3,s)
#define VSQ(v)               VDot(v,v)
#define VProduct_itself(v)     VProduct(v,v,v)
#define VVDiv(v1,s)            VDiv(v1,v1,s)	      
#define VDiv_itself(v,s)      VDiv(v,v,s)


#define  VWrap(v,t)                           \
  if((v).t >= region.t) (v).t-=region.t;		      \
  else if((v).t < 0)  (v).t+=region.t;
#define VWrapAll(v)           \
  {VWrap(v,x);              \
    VWrap(v,y);}
#define VWrap_OFF(m1,m2,lim,P,P_TRUE)			\
  if(m1<0 || m1>lim-1||m2>lim-1) P=NULL_INT;	\
  else  P=P_TRUE
//#define VWrap_OFFX(m1x,lim,P,P_TRUE)		\
//  if(m1x==lim) P=NULL_INT;
							\
#define AllocMem(a,n,t)  a= (t *)malloc((n) *sizeof(t))


#define VProd(v)       (((v).x)*((v).y))

#define Vtodd(v1,v2)				\
  (v1).x+=(v2).x,				\
  (v1).y+=(v2).y

#define VFORCE(F1,F2,v,s1)	   \
  F1.x-=(s1)*(v).x,			    \
    F1.y-=(s1)*(v).y,			    \
    F2.x+=(s1)*(v).x,			    \
    F2.y+=(s1)*(v).y

#define VProdd(v,sx,sy)   \
  (v).x+=sx,              \
    (v).y+=sy
#define DO_MOL  for(n=0;n<Mol;++n)
#define Sqr(x) (x)*(x)
//#define VPARTH_THETA(v,p)   (v).theta+=sqrt(2*Mt*h)*(*p)

#define Form_Set(v,s)				\
  (v).diameter=s,    \
    (v).radius=(s)*(0.5)
#define Set_Coor(v1,v2,v3)			\
  (v1).y=1+(v2).y+(n1)*(v3).diameter,\
(v1).x=1+(v2).x+(n2)*(v3).radius
#define Take_force(v1,v2,s)    \
  (v1).x+=(s)*(v2).x, \
    (v1).y+=(s)*(v2).y

#define VSSAdd(v1,v2,v3)	       \
  (v1).x=(v2).x+cos((v3).theta),	       \
    (v1).y=(v2).y+sin((v3).theta)
#define DO_ULTRA   for(i=0;i<limicycle;++i)

#define DO_print(ti,v1,plusv,v2)   fprintf(fp,"%lf\t %lf \t %lf\t%lf\t%14.12lf\t%14.12lf\n",ti,(v1).x,(v1).y,plusv,v2.x,v2.y)


#define Vatan(v) atan2((v).y,(v).x)
#define VP(v) (v).x,(v).y
#define alloc_MM(p,rows,cols,t)					\
  p=(t**)malloc((rows)*sizeof(t));				\
    for(n=0;n<rows;++n) p[n]=(t*)malloc((cols)*sizeof(t));
  

 //fistr

  typedef struct{
  real x,y;
}vecreal;

typedef struct{
  real cw,acw;
  real Ncw,Nacw;
  real w,Nw;
}p_of_r;

typedef struct{
  real x,y;
  real diam;
  vecreal temp;
  real DotFn;
  int form;
  real rot,rot1,rot2,rot3,rot4,rot_u,rotp,SSrot1,SSrot2;
  real N,Np1,N1,N2,N3,N4;
  real Nw,Nwp;
  real DT_r;
  int DT_rh;
  real N_rotp,N_rotm;
  real N_rotp_l,N_rotm_l;
  real N_rotp_r,N_rotm_r;
  real theta;
  //***************************
  real f1,f2;
  struct{
    real x,y;
  }center;
  real momentum,rotc;
}kilo;


typedef struct{
  int inClust;////***************************************************************************** INCLUSTER
  vecreal rho;
  vecreal p,ri;
  real theta;
  vecreal F1,F2;
  vecreal V,Trueposi,Force,Increp,HalfP,Init;
  real f1_theta,f2_theta;
 //new structs
  // struct to second passe of  Runge-Kutta mathd
  struct{
    real theta;
  }HalfT;
  real  VtClust;
  real  dVt;
  vecreal Or;
  int inclust;
  struct{
    vecreal p,v;   
  }fd;
  //*********************************
  real fvx[NDOTS],fvy[NDOTS];
  real fx[NDOTS],fy[NDOTS];
  //************************************
  vecreal SV;
  real r0,Dr;
  int inobs[2];
  int dinobs[2];
}vecgrain;



typedef struct {
int head, next, size;
  int obs[2];
  int obs1, obs2;
} Clust;

typedef struct{
  vecreal r,v;
  int inClust;
  int n;;
}vecgrain_copy;


typedef struct {
  int CC;//yes(1) or not(0)
  int N_CC;//number of cluster C
  int flag;// for fist time
  int step_CC;
  int flag_N;;
  int count_p1,count_p2;
  real True_period;
  int True_count;
  struct{
    int CC;//yes(1) or not(0)
    int N_CC;//number of cluster C
    int flag;// for fist time
  }sub;

  struct{
    int step_CC;
  }not;

  
  struct{
    int step_CC;
    int N_step_CC;
    int not_N_step_CC;
    int not_step_CC;
    int count_cc,count_ccn;
    real True_period;
    int  True_count;
  }medida;
} State;






typedef struct{
  real time;
  real period;
  
}StateMeasure;

//radius function
typedef struct{
  real Vt,Wt,N,Vn;
}F_r;




///////////////////////////lp.in
int filmclick;
int Nessay,NstepT,Thecycle,NOBS,CY_BE,CY_AF,n_celula;
real stepT,noiseTheta,diam,kappa,kappaObs,v0,a0,Density;
real diamObs,d0;
//g of r
int sizeHistRdf;

NameList nameList[] = {
		       NameI(Nessay),
		       NameR(stepT),
		       NameR(noiseTheta),
		       NameR(diam),
		       NameR(kappa),
		       NameR(kappaObs),
		       NameR(v0),
		       NameI(NstepT),
		       NameI(Thecycle),
		       NameI(CY_BE),
		       NameI(CY_AF),
		       NameR(a0),
		       NameI(n_celula),
		       NameR(d0),
		       NameI(filmclick),
		       NameI(sizeHistRdf)
};
real rangeRdf;
////////Global variables
int sx[5]={0,1,1,0,-1};
int sy[5]={0,0,1,1,1};
int Mx,My;
int Mol;
real L,omegatt;
real A=4.5;
vecgrain *grain;
vecgrain_copy *grain_copy;
vecreal region;
Clust *clust;;
kilo *ObsS;
real **vx;
real **vy;
///State
State state;
int nessay,Nowcycles;
int nf_rest,nf_int,tt,tt_1,tt_s;
int Mol_copy;;
//measure

/////////////////////functions
//initials
typedef struct{
  real N01,N23,N03,N12;
  real f01,f23,f03,f12;
  //new flow
 
}Vflow;

typedef struct{
  real Nup,Ndown;
}NV_meio;





int flowtime;
NV_meio Nvy_meio;
Vflow flow;
// Medidas
typedef struct{
  ///****************************
  //*******************************
  real SSw1,SSw2;
  real presure1,presure2;
  real w1,w2,w3,wp,wp1,w11,w12,w13,w14;
  real Cw_u;
  real taxNw,taxNwp1;
  //********************************************
  real DT_CC,DT_NOT_CC;
  real p_cc;
  real p_ccn;
  
  //***************************
  real f1,f2,b1,b2,a1,a2;
  real Mobi1,Mobi2;
  real Nmb1,Nmb2;
  real Phi1_N,Phi2_N,Phi3_N,Phi4_N;
  //***************************
  real psiHexObs,psiSqrObs,CM;
    struct{
      real cw1,cw2,cw3,w3;
      real f1,f2,b1,b2,a1,a2;
      real SSw1,SSw2;
  //********************************************
  }essay_S;
}medida;



//Nova medida
typedef struct{
  real vy,vx;
  real p_vyp,p_vym,p_vxp,p_vxm;
  real N;
  real x;
  real vxI,vyI;
  real vn,vf;
}Medida_entreobs;


typedef struct{
  real v;
  real p_fm,p_fp;
}proba_v;

//*****************

//meididas definidas
int NstepMeida;
Medida_entreobs *distr_total;
Medida_entreobs *distr_inobs;
Medida_entreobs *distr_iny;
medida *meansure;
StateMeasure *Sta_meansure;
int GetNameList (int argc, char **argv);
void PrintValues();
void Setup();;
void Allocarray();
void SetInitial();
void SetObsS();
///INTEGRATIONS functions
void SingleStep(int iten[]);;
void Runge_Kutta(int path);
void Computforce(int P[] );
void Computforce_Half(int P[]);
void Boundary_Condition();
void Boundary_Condition_Half();
void Linklist_Half(int P[]);///
void increment_Force(int p1,int p2,double D,vecreal diff,double dell);
void ZeroForce();
void Nullpoint(int iten[]);
void ComputOnObs(int part);
void Linklist(int P[]);
void GLinklist(int P[],real lenghtCC,int MCC,int part);
//Random functions
real Setnoisetheta();
void Gaussian(double *gaussX, double *gaussY);
real Realrand();
///Util
void Zero_array(real vp[],int lim);
void ObsFormC(int nObs,int ted,vecreal  diff);
void M(int arr[],int x,int limit);
void TesteCompObsS(int part);
void Euler(int part);
void ZeroDotObs();
void Compt_Regular_Obs();;
void Compt_Regular_Obs_Half();;
void Copy_Grains_Obs();;
void AddBondedPair (int j1, int j2);;
void InitClusters ();;
void CompressClusters ();;
void AnalClusterSize ();;
//new function
void Copy_Grains_Obs_cyc(real yb1,real yb2);
void AddBondedPair_cyc (int j1, int j2);
void InitClusters_cyc ();
void CompressClusters_cyc ();;
void AnalClusterSize_cyc (real yb1, real yb2);;
void AnalClusterSize_cyc2 (real yb1, real yb2);;
void lazinessfunction();
void Zero_Mensure();
//Main functions
p_of_r *P_of_r;;
real **psix;
real **psiy;
real **phi_field;
real tax_null;
real diamobsr;;
real rClust;
int nClust;
//real *p_dist_cc;
//real *p_dist_ccn;
int  count_dist;
real a_vx,a_vy;
real  max_vy,max_t;
F_r *f_r;//radial function
//****************************

//********************************************************************************************

real dv_e,dv_e1;
int Essay_film,tt_If;

//********************************************************************************************
///*******************************
vecreal box1v,box2v,box3v;
//***********************************************************************
Medida_entreobs *Medida_r;
int N_interac,N_nNinterac;
int N_interac2,N_nNinterac2;
real vxm,vym,vxnm,vynm;
real vxm2,vym2,vxnm2,vynm2;
//****************************************
real *histRdf;
int tt_dots,n_dots,tt_obs;
real NField;
real countRdf;
real GeralCount;
real DeltaTheta;
real xparam;
//mobility
real Mobi1,Mobi2;
real Phi1_N,Phi2_N,Phi3_N,Phi4_N;
int N_f_r,D_f_r;
int main(int argc, char **argv){
  GetNameList ( argc, argv);
  PrintValues();
  Setup();
  
  real auxT;
  int Singlep[Mol+Mx*My];
  int morecycles;
  int m,pp;
  FILE *fp;
  int init_essay;
  int flagInit;
  
 //essay enviarement
 fp=fopen("INIT_ESSAY.txt","r");;
 fscanf(fp,"%d",&init_essay);;
 fclose(fp);;
 printf("INIT_ESSAY=%d\n",init_essay);;
 nessay=INITESSAY;//hgere Junior
 Essay_film=init_essay;
 //*******************************
 
 //*******************************
   SetObsS();
    flagInit=0;
  Zero_Mensure();
  GeralCount=0.;
  
 for(m=0;m<Nessay;++m){
   //*******
   Phi1_N=Phi2_N=Phi3_N=Phi4_N=0.;;
   Mobi1=Mobi2=0.;
   ///********
   NField=0.;
   countRdf=0.;
   flowtime=0.;
   tt_obs=0;
   tt_dots=0.;
   vxm=vym=vxnm=vynm=0.;
   N_interac=N_nNinterac=0;
   N_interac2=N_nNinterac2=0;
   NstepMeida=0;
   morecycles=1;
  ////erro !
   Nowcycles=0;
   tt_s=tt=tt_1=0;
   SetInitial();;;
   SetInitial();;;
   printf("Estou aqui\n");;
   if(m==init_essay){
     flagInit=1;
     printf("Rodou em %d\n",m);;
   }
   
   ///////ObstaclesS
   if(flagInit==1){
     while(morecycles){
       ++Nowcycles;
         SingleStep(Singlep);
       
       if(Nowcycles==NstepT)
	 morecycles=0;
     };
   }
   //******************************

 ++nessay;
 printf("feito>> 2 obstacles!!!\n");
 }
  
 //**************************************************
  lazinessfunction();
//***************************************************
/*               ESSAY BY HERE                     */
 printf("The Last Data\n");;
 int cyc;
 real INessay;
 INessay=1./Nessay;
 cyc=(NstepT-Thecycle)/NMEAS;;

 ///normalize!!
 real aux_j;
 ///aqui



 
}

//


int GetNameList (int argc, char **argv){
  int  j, k, match, ok,Count,cc;
  char buff[80], *token;
  FILE *fp;
  strcpy (buff, argv[0]);
  strcat (buff, ".in");
  
  cc=0;
  printf("%s\n",buff);
  
  if( (fp=fopen(buff,"r"))==0) printf("weaning");
  for (k = 0; k < sizeof (nameList) / sizeof (NameList); k ++){
    nameList[k].vStatus = 0;
   ++Count;
 }
  
 ok = 1;
 while(1){
   fgets (buff, 80, fp);
   //printf("buffi is  %s\n",buff);
   if (feof (fp)) break;
   token = strtok (buff, " \t\n");
   //printf("token is %s\n",token);
   if (! token) break;
   match = 0;
   for (k = 0; k < sizeof (nameList) / sizeof (NameList); k ++) {
     if (strcmp (token, nameList[k].vName) == 0) {
       match=1;
       if (nameList[k].vStatus == 0) {
	 nameList[k].vStatus = 1;
	 for (j = 0; j < nameList[k].vLen; j ++) {
	   token = strtok (NULL, ", \t\n");//here
	   //  printf("asssasa token in %d is %s\n",j,token);
	   if (token) {//5
	     switch (nameList[k].vType) {
	     case N_I:
	       *NP_I = atol (token);
	       break;
	     case N_R:
	       *NP_R = atof (token);
	       break;
	     }
	   } else {
	     nameList[k].vStatus = 2;
	     ok = 0;
	   }
	 }
	 token = strtok (NULL, ", \t\n");
	 if(token){
	   nameList[k].vStatus = 3;
	   ok = 0;
	 }
	 break;
       } else {
	 nameList[k].vStatus = 4;
	 ok = 0;
       }
     }
   }
   if (! match) ok = 0;
 };
 fclose(fp);
 return(ok);
}

void PrintValues(){
  int k,j;
  real densidy;
  FILE *fp=fopen("printValues.dat","w");
  // FILE *file_den=fopen("densidy.dat","w");

  j=0;
  for (k = 0; k < sizeof (nameList) / sizeof (NameList); k ++) {
    if(nameList[k].vName!=NULL)
      switch (nameList[k].vType) {
      case N_I:
	printf("%s\t %i\n",nameList[k].vName,*NP_I);
	fprintf(fp,"%s\t %i\n",nameList[k].vName,*NP_I);
      break;
      case N_R:
	printf("%s\t %f\n",nameList[k].vName,*NP_R);
	fprintf(fp,"%s\t %f\n",nameList[k].vName,*NP_R);
	break;
    }
    
    
  }

  fclose(fp);
  ///ppp
  //densidy=Mol*M_PI*Sqr(0.5*diam)*(1./(Sqr(L)-NOBS*M_PI*Sqr(0.5*diamObs)));
  // printf("densidy in free space is \t %f\n",densidy);
  // fprintf(file_den,"densidy in free space is \t %f\n",densidy);
  // StateP();
}


void Setup(){
  ///I am here in Setup()
  int n,nO,N_eff;
  real fpi=3.14159265;
  FILE *fp_h;
  int num_null_obs;
  real num_null_obs_aux;
  real aux_L;
  fp_h=fopen("xparam.txt","r");;
  fscanf(fp_h,"%lf",&xparam);;;
  fclose(fp_h);;
  printf("xparam=%f\n",xparam);;;
  
  fp_h=fopen("file_DeltaTheta.txt","r");;
  fscanf(fp_h,"%lf",&DeltaTheta);;;
  fclose(fp_h);;
  ///
  rClust=1.02;;
  fp_h=fopen("file_diamobs1.txt","r");;
  fscanf(fp_h,"%lf",&diamobsr);;;
  fclose(fp_h);;
  printf("diamobs_semiDisk=%f\n",diamobsr);;
  ///
  fp_h=fopen("file_diamobs_central.txt","r");;
  fscanf(fp_h,"%lf",&diamObs);;;
  fclose(fp_h);;
  printf("diamobs_central=%f\n",diamObs);;
  if(diamObs<0.){
    //protocool BY D
    diamObs=diamobsr;;
    fp_h=fopen("protocol_BYD.txt","w");;
    fprintf(fp_h,"BY D>>>D=%f\n",diamObs);;
    fclose(fp_h);;
  }
  ///
  fp_h=fopen("file_a0.txt","r");;
  if(fp_h==NULL){
    printf("file_a0.txt not fould!\n");;
    exit(-1);;
  }
  fscanf(fp_h,"%lf",&a0);;
  printf("a0=%f\n",a0);;
  fclose(fp_h);;
  ////
  //the number of obstalce in lattice
  NOBS=n_celula*n_celula; 
  //tax of null obstacles
  fp_h=fopen("tax_NULL_obs.txt","r");;
  fscanf(fp_h,"%lf",&tax_null);;
  fclose(fp_h);;
  printf("tax of nuull obstacles is %f\n",tax_null);;
  num_null_obs_aux=NOBS*tax_null;;
  num_null_obs=ceil(num_null_obs_aux);;
  //the size of system
  printf("Para Ds different here\n");
  L=n_celula*(diamObs+a0);;;
  //g de r
  rangeRdf=L*sqrt(2)*0.5;
  printf("L  %f\n",L);
  printf("RangeRdf=%f\n",rangeRdf);
  fp_h=fopen("fileDen.txt","r");
  fscanf(fp_h,"%lf",&Density);
  fclose(fp_h);
  printf("\n");;
  printf("phi  %f\n",Density);;;
  //// ## the  number of particles
  N_eff=NOBS-num_null_obs;;
  if(N_eff<1){
    printf("Weanning!\n N_eff is so short number\n");;
    exit(-1);;
  }
  Mol=ceil(Density*(L*L-fpi*diamObs*diamObs*0.25)*4*(1./fpi));
  printf("Mol  %d\n",Mol);;
  ///set arrays
  printf("Allocarray!\n");
  Allocarray();
  printf("Allocarray okay !\n");
  Vset(region,L,L);
  //***** updade:12/12/2024
  Mx=(int)(L*0.5);
  My=(int)(L*0.5);
  aux_L=2*Mx;
  if(L>aux_L){
    Mx+=1;
    My+=1;
    printf("L é impar\n");
   
  }
  //Vtop(Mx,My,region,2*diam);
  //*****************
  //  n_top=0;
 
  printf("Setup termidend!!\n");
  fp_h=fopen("dislin_param.dat","w");
  fprintf(fp_h,"%f\t%d\t%f\t%d\n",L,Mol,diamObs,NOBS);
  fclose(fp_h);
  //README_FILE
  fp_h=fopen("README.dat","w");;
  fprintf(fp_h,"THE 2 OBSTACLES\n");;
  //fprintf(fp_h,"n=%d\n",n_celula);;
  fprintf(fp_h,"NOBS=n*n=%d\n",NOBS);;
  fprintf(fp_h,"THE DIEMETER OF OBSTACLE\n");
  fprintf(fp_h,"D=%f\n",diamObs);;  
  // fprintf(fp_h,"Tax of Null Obstacles\n");;
  // fprintf(fp_h,"TAX_NULL_OBS=%f\n",tax_null);;;;;
  // fprintf(fp_h,"NUMBER OF NULL OBSTACLES IN LATTICE\n");;
  // fprintf(fp_h,"num_null_obs=NOBS*tax_null=%d\n",num_null_obs);;;;
  // fprintf(fp_h,"NUMBER OF NO NULL OBSTACLES IN LATTICE\n");;
  //fprintf(fp_h,"N_EFF_OBS=%d\n",N_eff);;
  // fprintf(fp_h,"THE SIZE OF SYSTEM\n");;
  fprintf(fp_h,"a0=%f : gap\n",a0);;
  fprintf(fp_h,"L=n*(D+a0)=%f\n",L);;
  fprintf(fp_h,"DENSITY OF PARTICLES\n");;
  fprintf(fp_h,"Density=%f\n",Density);;;
  fprintf(fp_h,"THE NUMBER OF PARTICLES (Mol)\n");;
  fprintf(fp_h,"f0: ration area of particles and area of free space\n");;
  fprintf(fp_h,"Mol=Density*f0=%d\n",Mol);;
  fprintf(fp_h,"Total_TIME=%d\n",NstepT);;
  fprintf(fp_h,"TERMIZATION_TIME=%d\n",Thecycle);;
  fprintf(fp_h,"DT=%f\n",stepT);;
  fprintf(fp_h,"NUMBER OF ESSAYS\n");;
  fprintf(fp_h,"NUM_ESSAY=%d\n",Nessay);;
  fprintf(fp_h,"FIND FILE WITH PREFIX: ESSAY_\n");;
  fprintf(fp_h,"PRINCIPAL MEANSURES: STRONG CORRELATION CW_F\n");;
  fprintf(fp_h,", DIAG CORRELATION CW_D\n");;
  fprintf(fp_h,"AND VORTEX INCIDENCE IW\n");;
  fprintf(fp_h,"THIS PROGRAMA DOES'NT WORK WITH a0<sigma\n");;
  fclose(fp_h);;
   //***************************************************
     /*               ESSAY INIT                      */
        
}


void Allocarray(){
  int lm,i,j,n,cyc;
  int intD;
  int Diag_eff;
  int lm_t;
  real Diag;
  lm_t=(int)L;
  lm=(int)L;
  intD=(int)a0;
  printf("the number pieces %d\n",intD);
  cyc=(NstepT-Thecycle)/NMEAS;
  Diag=sqrt(2)*L*0.5;;
  Diag_eff=ceil(Diag);;
  N_f_r=Diag_eff;//grobal
  D_f_r=Diag;// grobal
  AllocMem(histRdf,sizeHistRdf,real);
  for (n = 0; n < sizeHistRdf; n ++)
    {
      histRdf[n] = 0.;
    }
  AllocMem(f_r,Diag_eff,F_r);
   for (n = 0; n <Diag_eff ; n ++)
    {
     f_r[n].Vt=0.;
     f_r[n].Vn=0.;
     f_r[n].Wt=0.;
     f_r[n].N=0.;
    }
  AllocMem(clust,Mol,Clust);
  AllocMem(Medida_r,lm_t,Medida_entreobs);
  AllocMem(distr_total,lm_t,Medida_entreobs);
  AllocMem(distr_iny,lm_t,Medida_entreobs);
  AllocMem(distr_inobs,intD,Medida_entreobs);
  //AllocMem(grain_copy,Mol,vecgrain_copy);
  
  AllocMem(grain,Mol,vecgrain);

  AllocMem(P_of_r,NPR,p_of_r);///prob here
  for(i=0;i<NPR;++i){
    P_of_r[i].cw=P_of_r[i].acw=0.;
    P_of_r[i].Ncw=P_of_r[i].Nacw=0.;
    P_of_r[i].Nw=P_of_r[i].w=0.;
  }
  
  
  AllocMem(ObsS,NOBS,kilo);
  AllocMem(meansure,NMEAS,medida);
  AllocMem(Sta_meansure,NMEAS_STATE,StateMeasure);
  //*********************************
  alloc_MM(phi_field,lm,lm,real);
  alloc_MM(vx,lm,lm,real);
  alloc_MM(vy,lm,lm,real);
  alloc_MM(psix,lm,lm,real);
  alloc_MM(psiy,lm,lm,real);
   for(i=0;i<lm;++i){
     for(j=0;j<lm;++j){
       vx[i][j]=0.;
       vy[i][j]=0.;
       psix[i][j]=0.;
       psiy[i][j]=0.;
       phi_field[i][j]=0.;
       
     }
   }
  
}

void SetInitial(){
  int n;
  FILE *fp;
  FILE *fpg;
  fp=fopen("erroshere.dat","w");
  fpg=fopen("Initialgrians.dat","w");
  // sn=0;
  DO_MOL{
    VsetAll(grain[n].p,L*fabs(Realrand()));
    fprintf(fpg,"%f\t%f\n",grain[n].p.x,grain[n].p.y);
    VZero(grain[n].fd.p);//
    VZero(grain[n].fd.v);//
    Vtheta(grain[n], Setnoisetheta());
    VsetTrue(grain[n].Trueposi,grain[n].p);
    VsetTrue(grain[n].Init,grain[n].p);
    grain[n].inobs[0]=-1;
    grain[n].inobs[1]=-1;
    grain[n].dinobs[0]=-1;
    grain[n].dinobs[1]=-1;
    if((grain[n].p.x>L)||(grain[n].p.x<0)){
      fprintf(fp,"there is a problem .x is %f\n",grain[n].p.x);
      exit(-1);   
    }else if((grain[n].p.y>L)||(grain[n].p.y<0)){
      fprintf(fp,"there is a problem .x is %f\n",grain[n].p.y);
      exit(-1);   
    }
   
    VZero(grain[n].Or);
   
  }
  fclose(fpg);
  fclose(fp);
  //obs obstacles
  for(n=0;n<NOBS;++n){
    ObsS[n].N=0.;
    ObsS[n].N1=0.;
    ObsS[n].N2=0.;
    ObsS[n].N3=0.;
    ObsS[n].N4=0.;
    ObsS[n].Nw=0.;
    ObsS[n].Nwp=0.;;
    ObsS[n].Np1=0.;
    ObsS[n].rot=0.;
    ObsS[n].rot1=0.;
    ObsS[n].rot2=0.;
    ObsS[n].rot3=0.;
    ObsS[n].rot4=0.;
    ObsS[n].rotp=0.;
    ObsS[n].rot_u=0.;
    ObsS[n].rotc=0.;
    ObsS[n].DotFn=0.;
    ObsS[n].N_rotp=0.;
    ObsS[n].N_rotm=0.;
    ObsS[n].N_rotp_r=0.;
    ObsS[n].N_rotm_r=0.;
    ObsS[n].N_rotp_l=0.;
    ObsS[n].N_rotm_l=0.;
    ObsS[n].f1=0.;
    ObsS[n].f2=0.;
    ObsS[n].SSrot2=0.;
    ObsS[n].SSrot1=0.;
    //****************************
   
  }

  //***************************************
  /*            Another                  */
  //****************************************************
  //INit State
  state.flag_N=0;;
  state.flag=0;
  state.step_CC=0;
  state.not.step_CC=0;;
  ///////measure!
  state.medida.step_CC=0;
  state.medida.N_step_CC=0;
  state.medida.not_step_CC=0;
  state.medida.not_N_step_CC=0;
  state.medida.count_cc=0;
  state.medida.count_ccn=0;
  //**********************************
  state.count_p1=0;
  state.count_p2=0;
  ///*************************************
  a_vx=a_vy=0.;
  ///
  max_vy=0.;
  max_t=0.;
  count_dist=0;//
  //*******************************************
  state.True_period=0.;
  state.medida.True_count=0.;;
  //**********************************
  for(n=0;n<NMEAS_STATE;++n){
    Sta_meansure[n].time=0.;
    Sta_meansure[n].period=0.;;
  }
  //*****************************************************
 
  dv_e=0.;
  //*****************************************************
  tt_If=0;;;
  //*****************************************************
  VZero(box1v);
  VZero(box2v);
  VZero(box3v);
  //distr_inobs
  int intD,lm_t;
  intD=(int)a0;
  lm_t=(int)L;
 

   for(n=0;n<lm_t;++n){
    distr_total[n].vx=0.;
    distr_total[n].vy=0.;
    distr_total[n].p_vyp=0.;
    distr_total[n].p_vym=0.;
    distr_iny[n].p_vxp=0.;
    distr_iny[n].p_vxm=0.;
    distr_total[n].N=0.;
    distr_total[n].x=0.5+n*1.0;;
  }

   for(n=0;n<lm_t;++n){
   distr_iny[n].vxI=0.;
   distr_iny[n].vyI=0.;
   distr_iny[n].vx=0.;
   distr_iny[n].vy=0.;
   distr_iny[n].p_vyp=0.;
   distr_iny[n].p_vym=0.;
   distr_iny[n].p_vxp=0.;
   distr_iny[n].p_vxm=0.;
   distr_iny[n].N=0.;
   distr_iny[n].x=0.5+1.0*n;;
  }
   //********************************
   
   //****************************************

   

   //**********************************************
   //permanente
   //Nvy_meio.Nup=0.;
   // Nvy_meio.Ndown=0.;
}

void ZeroDotObs(){
  int n;
  for(n=0;n<NOBS;++n){
    ObsS[n].DotFn=0.;
  }
}
void SetObsS(){/////
  int n0,nx,ny,nr,side_Obs,ai,m,ok,q,door;
  real incre,over,yy,Diam,rand1,auxf;
  FILE *fp;
  int MObs[NOBS];
  int num_null_obs,mat;
  real num_null_obs_aux;
  real fpi;
  fpi=3.141592;
  //real tax_null;
  num_null_obs_aux=NOBS*tax_null;;
  num_null_obs=ceil(num_null_obs_aux);;
  //
  side_Obs=sqrt(NOBS);
  

  // ObsS[1].x=L*0.5;
  //ObsS[1].y=L*0.5;
  // n0=0;
  printf("position of Obstacles\n");
  //*************************************
 
  
  //*************************************
  //first obstacle
  ObsS[0].diam=diamObs;
  Diam=ObsS[0].diam+a0; 
  ObsS[0].x=L*0.5-Diam*0.5;
  ObsS[0].y=L*0.5;
  ObsS[0].DT_r=fpi*diamObs*(1./v0);
  auxf=ObsS[0].DT_r*(1./stepT);
  ObsS[0].DT_rh=ceil(auxf);
  //******************************************
  //second obstacle
  ObsS[1].diam=diamobsr;
  Diam= ObsS[1].diam+a0; 
  ObsS[1].x=L*0.5+Diam*0.5;
  ObsS[1].y=L*0.5;
  ObsS[1].DT_r=fpi*diamobsr*(1./v0);
  auxf=ObsS[1].DT_r*(1./stepT);
  ObsS[1].DT_rh=ceil(auxf);
  //******************************************
  Diam=diamObs+a0;;
 
for(ny=0;ny<n_celula;++ny){
  for(nx=0;nx<n_celula;++nx){
    nr=n_celula*ny+nx;
    ObsS[nr].x= Diam*0.5*(1+2*nx);
    ObsS[nr].y= Diam*0.5*(1+2*ny);
    ObsS[nr].form=1;
    ObsS[nr].diam=diamobsr;
  }
 }
//
 ObsS[4].diam=diamObs;
 //
  ///null obstalces
 ObsS[0].form=ObsS[2].form=ObsS[6].form=ObsS[8].form=0;
 //circular obs
 ObsS[4].form=10;
 //obs angle
 ObsS[1].theta=270+DeltaTheta;
 ObsS[1].y+=xparam;
 ObsS[1].form=0;;
 ObsS[3].theta=0+DeltaTheta;
 ObsS[3].x+=xparam;
 ObsS[3].form=0.;
 ObsS[5].theta=180.+DeltaTheta;
 ObsS[5].x-=xparam;
 ObsS[5].form=0.;
 ObsS[7].theta=90+DeltaTheta;
 ObsS[7].y-=xparam;
 ObsS[7].form=0;
 for(nx=0;nx<NOBS;++nx){
   if(ObsS[nx].form==1){
     if(ObsS[nx].theta>360.0){
       ObsS[nx].theta=ObsS[nx].theta-360.0;
     }

if(ObsS[nx].theta<-360.0){
       ObsS[nx].theta=ObsS[nx].theta+360.0;
     }

     
   }
 }
  //olha aiaia
   //printe obstacles obs
   fp=fopen("obsNobs.dat","w");
   for(nx=0;nx<NOBS;++nx){
     
     printf("%lf\t%lf\t%d\n",ObsS[nx].x,ObsS[nx].y,ObsS[nx].form);
     fprintf(fp,"%lf\t%lf\t%d\t%lf\n",ObsS[nx].x,ObsS[nx].y,ObsS[nx].form,ObsS[nx].theta);
   }
   fclose(fp);

   
}
////////////////////////////////INTEGRATION////////////////////////////////

/*comteario*/

//SingleStep function
void SingleStep(int iten[]){/////here
  real SSw1,SSw2;
  real SSN1,SSN2;
  real Step_R;
  vecreal  r_n,r_xy,diff,psi,psin,Vaux;
  int nh;
  real r,dell,theta,nObs_side,lcel,r_v;
  FILE *fp_prob;
  FILE *fp;
  int nx,ny,i_Obs, alph_Obs,nxI,nyI,f;
  real dell_L,aux,auxT,aux1,auxr2,auxr,auxbar;
  real rot1,rot2;
  real deltaR,normFac;
  real a1,a2,a3,hs_1,hs_2,momentum;
  real hi_1,hi_2;
  int lc=L;
  int InObs_side;
  int Timecycle=abs(NstepT-1000);///>>>>>aqui
  int M0;
  int cycr,cyc,cb,dc,jj,ii,kk,n,pp,nO;
  real fpi=3.141592;
  real Dl,rr;
  real deshx,deshy;;
  real x1,x2,y1,y2;
  real v1,v2,maxv;
  real xr,yr;
  //
  a1=NPR-1;
  Step_R=sqrt(2)*L*0.5*(1./a1);////parei aqui
  Dl=L*(1./3);;
  cyc=(NstepT-Thecycle)/NMEAS;
  nObs_side=sqrt(NOBS);
  lcel=L/nObs_side;
  InObs_side=(int)nObs_side;
  M0=n_celula;;
  //density=Mol*M_PI*(1./( Sqr(L)-NOBS*M_PI*Sqr(diamObs)*0.25  ))*(0.25);
  // dell_L=lcel-diamObs;
  //  Dell_N=(density*(Sqr(diamObs+dell_L)-Sqr(diamObs)*M_PI*0.25));
  //ou aqui
  if(cyc==1){
    fp_prob=fopen("errosHere2.dat","w");
    fprintf(fp_prob,"cyc  %d\n",cyc);
    fclose(fp_prob);
    exit(-1);
  }


  
  //ZeroDotObs();
  Nullpoint(iten);//okay!
  Linklist(iten);//okay ! maybe
  ZeroForce();//okay ! maybe
  Computforce(iten);//->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//here resolved
  Compt_Regular_Obs();;
  //Runge_Kutta(1);
  //Euler here
  Euler(1);;
  //end Euler
  //Boundary_Condition_Half();//vv
  Nullpoint(iten);
  ZeroForce();
  //Linklist_Half(iten);  
  //Computforce_Half(iten);//vv
  //Compt_Regular_Obs_Half();;
  /// Runge_Kutta(2);//vv
  Boundary_Condition();;
  cycr=(NstepT-Thecycle)/NMEAS_ALPHA;
  dc=Nowcycles-Thecycle;


  //*******************************************
  //film init
  /*
  if((nessay==Essay_film)&&(filmclick==1)){
    ///************************************
    if(tt_If!=NFRAME)
      if(!(Nowcycles%200)){
	fp=fopen(qI[tt_If],"w");
	DO_MOL{
	  fprintf(fp,"%f\t%f\t%f\t%f\n",grain[n].p.x,grain[n].p.y,grain[n].V.x,grain[n].V.x);;
	}
	  fclose(fp);;
	  ++tt_If;;
      } 
   
    
  }
  */
  //film dc
  if((nessay==Essay_film)&&(filmclick==1)){
    ///************************************
    if(dc>0){
      if(tt_1!=NFRAME)
	if(!(dc%200)){
	  fp=fopen(q[tt_1],"w");
	  DO_MOL{
	    fprintf(fp,"%f\t%f\t%f\t%f\n",grain[n].p.x,grain[n].p.y,grain[n].V.x,grain[n].V.x);;
	  }
	  fclose(fp);;
	  ++tt_1;
	} 
    }
    
  }
  dc=Nowcycles-Thecycle;
 

  
  //dc_thirf=Nowcycles-5000000;
  real r_cut,r2,DA,I_DA,fI_DA,ww;
  real Icyc,cw1,cw2,wr1,wr2;;
  int mx,my,nr,nk,myk,mxk;;
  int count1,count2,p1_count,p2_count,pt_count;;
  real aux2;
  real auxM;
  int intD,lm_t;
  real mobi1,mobi2,Smobi1,Smobi2;
  int aub;
  lm_t=(int)L;
  intD=(int)a0;
  Icyc=1./cyc;;
  //if(dc<0){
    // printf("time=%d\n",Nowcycles);
  // }
   if(dc>0){
    
     //***************************************
     // printf("dc all time=%d\n",Nowcycles);
     Vaux.x=L*0.5;
     Vaux.y=L*0.5;
     ///intermediario
     DO_MOL{
       VSub(diff,grain[n].p,Vaux);
       r2=VSQ(diff);;
       r=sqrt(r2);;
       a1=r*(1./Step_R);
       aub=(int)r;
       nx=(int)a1;
       theta=Vatan(diff);;
       psi.x=-sin(theta);;
       psi.y=cos(theta);;
       //**************
       psin.x=cos(theta);;
       psin.y=sin(theta);;
       //*********************
       
       auxT=VDot(grain[n].V,psi);
       P_of_r[nx].w+=auxT*(1./r);
       P_of_r[nx].Nw+=1.;
       //*******************
       f_r[aub].Vn+=VDot(grain[n].V,psin);
       f_r[aub].Vt+=auxT;
       f_r[aub].Wt+=auxT*(1./r);
       f_r[aub].N+=1.;
       if(auxT<0.){
	 P_of_r[nx].cw+=1.;
	 P_of_r[nx].Ncw+=1.;
	 // Smobi1+=1.;
	 // auxM=VSQ(grain[n].V);
	 // mobi1+=sqrt(auxM);
       }else if(auxT>0.){
	 P_of_r[nx].acw+=1.;
	 P_of_r[nx].Nacw+=1.;
	 Smobi2+=1.;
	 ////auxM=VSQ(grain[n].V);
	 //// mobi2+=sqrt(auxM);
       }
     }
     GeralCount+=1.;
     
     //***************************************
       //printf(">>x1=%f< x2=%f\n",x1,x2);;
       // printf(">>y1=%f<  y2=%f\n",y1,y2);;
       
       
         //*********************************************
     /*       Field and scalar function      */
     //printf("campo\n");;
    
       DO_MOL{
	 
	 nx=(int)(grain[n].p.x);
	 ny=(int)(grain[n].p.y);
	 
	 printf("nx=%d\n",nx);
	 printf("ny=%d\n",ny);
	 // printf("y=%lf\n",grain[n].p.y);;
	 vx[nx][ny]+=grain[n].V.x;;
	 vy[nx][ny]+=grain[n].V.y;
	 psix[nx][ny]+=grain[n].rho.x;;
	 psiy[nx][ny]+=grain[n].rho.y;
	 phi_field[nx][ny]+=1.;
	 NField+=1.;
       }
    
       //}
     //*************************************
     /*              Rot                  */

       DO_MOL{
	 nx=(int)grain[n].p.x*(1./Dl);
	 ny=(int)grain[n].p.y*(1./Dl);
	 nh=M0*ny+nx;;;
	 VSub(diff,grain[n].p,ObsS[nh]);;
	 r2=VSQ(diff);;
	 r=sqrt(r2);;
	 theta=Vatan(diff);;
	 psi.x=-sin(theta);;
	 psi.y=cos(theta);;
	 auxT=VDot(grain[n].V,psi);
	 if(auxT>0.){
	   ObsS[nh].f1+=1.;
	 }else if(auxT<0.){
	   ObsS[nh].f2+=1.;
	 }
       }
       
       
 //********************
       ////Rot 2
       SSw1=SSw2=0.;
       SSN1=SSN2=0.;
       //**********MOBILIDADE
       mobi1=mobi2=Smobi1=Smobi2=0.;
       DO_MOL{
	 nx=(int)grain[n].p.x*(1./Dl);
	 ny=(int)grain[n].p.y*(1./Dl);
	 nh=M0*ny+nx;;;
	 ////////obs/////////////////////
	 if(nh==4){//circular parte
	   VSub(diff,grain[n].p,ObsS[nh]);;
	   r2=VSQ(diff);;
	   r=sqrt(r2);;
	   theta=Vatan(diff);;
	   psi.x=-sin(theta);;
	   psi.y=cos(theta);;
	   r_cut=ObsS[nh].diam*0.5+2.0;
	   if(r<=r_cut){
	   //////******************************
	     auxT=VDot(grain[n].V,psi);
	     ObsS[nh].rotp+=auxT*(1./r);
	     ObsS[nh].Np1+=1.;
	     //************
	     //outra média
	     //************
	     SSN2+=1.;
	     SSw2+=auxT*(1./r);
	     if(auxT>0.){
	       ObsS[nh].Nwp+=1.;
	       mobi1+=sqrt(VSQ(grain[n].V));
	       Smobi1+=1.;
	     }else if(auxT<0.){
	       ObsS[nh].Nwp-=1.;
	       mobi2+=sqrt(VSQ(grain[n].V));
	       Smobi2+=1.;
	     }
	     
	 }
	   //*****************
	   // rb=3.0
	   r_cut=ObsS[nh].diam*0.5+3.0;
	   if(r<=r_cut){
	   //////******************************
	     auxT=VDot(grain[n].V,psi);
	     ObsS[nh].rot3+=auxT*(1./r);
	     ObsS[nh].N3+=1.;
	     //************
	
	    	     
	 }
	   //******************
	 r_cut=ObsS[nh].diam*0.5+d0;
	 if(r<=r_cut){
	   //////******************************
	   auxT=VDot(grain[n].V,psi);
	   ObsS[nh].rot+=auxT*(1./r);
	   ObsS[nh].N+=1.;
	   //*********************
	   //outra media
	   ///********************
	   SSN1+=1.;
	   SSw1+=auxT*(1./r);

	   if(auxT>0.){
	     ObsS[nh].Nw+=1.;
	   }else if(auxT<0.){
	     ObsS[nh].Nw-=1.;
	     }
	   
	   if(diff.x>0.){
	     if(auxT>0.){
	       ObsS[nh].N_rotp_r+=1.;
	     }else if(auxT<0.){
	       ObsS[nh].N_rotm_r+=1.;
	     } 

	   }else if(diff.x<=0.){
	     if(auxT>0.){
	       ObsS[nh].N_rotp_l+=1.;
	     }else if(auxT<0.){
	       ObsS[nh].N_rotm_l+=1.;
	     } 

	   } 

	   if(auxT>0.){
	     ObsS[nh].N_rotp+=1.;
	   }else if(auxT<0.){
	     ObsS[nh].N_rotm+=1.;
	   } 
	   
	 }

	 r_cut=ObsS[nh].diam*0.5+5.0;
	 if(r<r_cut){
	   //////******************************
	   ObsS[nh].rot_u+=VDot(grain[n].V,psi);
	 }
	 //************************************
	 r_cut=ObsS[nh].diam*0.5+1.0;
	 if(r<r_cut){
	   //////******************************
	   auxT=VDot(grain[n].V,psi);
	   ObsS[nh].rot1+=auxT*(1./r);
	   ObsS[nh].N1+=1.;
	 }
	 //*************************************
	 //************************************
	 r_cut=ObsS[nh].diam*0.5+2.0;
	 if(r<r_cut){
	   //////******************************
	   auxT=VDot(grain[n].V,psi);
	   ObsS[nh].rot2+=auxT*(1./r);
	   ObsS[nh].N2+=1.;
	 }
	 //*************************************
	 //************************************
	 r_cut=ObsS[nh].diam*0.5+4.0;
	 if(r<r_cut){
	   //////******************************
	   auxT=VDot(grain[n].V,psi);
	   ObsS[nh].rot3+=auxT*(1./r);
	   ObsS[nh].N3+=1.;
	 }
	 //*************************************
	 //************************************
	 r_cut=ObsS[nh].diam*0.5+a0;//cut radius
	 if(r<r_cut){
	   //////******************************
	   auxT=VDot(grain[n].V,psi);
	   ObsS[nh].rot4+=auxT*(1./r);
	   ObsS[nh].N4+=1.;
	 }
	 //*************************************
       }
     }
       ///*********************************************
       if(SSN2>0.){
	 ObsS[4].SSrot2+=SSw2*(1./SSN2);
	 }

       if(SSN1>0.){
	 ObsS[4].SSrot1+=SSw1*(1./SSN1);
	 }
	 //****************************************
       if(Smobi1>0.){
	 Mobi1+=mobi1*(1./Smobi1);;
       }


       if(Smobi2>0.){
	 Mobi2+=mobi2*(1./Smobi2);;
       }
       aux2=Smobi1-Smobi2;;
       Phi1_N+=aux2;
       auxT=Smobi1+Smobi2;
       if(auxT>0.){
	 Phi2_N+=aux2*(1./auxT);
	 Phi3_N+=Smobi1*(1./auxT);
	 Phi4_N+=Smobi2*(1./auxT);
       }
      
      
     //*************************************************
     //dow corrent
   
       printf("current!\n");;
     //**************************************************************************
     /*                   distri in x  total                          */
       printf("Medida_r\n");
     for(n=0;n<lm_t;++n){
       Medida_r[n].vx=Medida_r[n].vy=0;
       Medida_r[n].p_vym=Medida_r[n].p_vyp=0.;
       Medida_r[n].N=0;
     }
     y1=L*0.5-diamObs*0.5-1;//diamObs*0.5;
     y2=L*0.5+diamObs*0.5+1;//diamObs*0.5;
     DO_MOL{
       xr=grain[n].p.x;;
    
	 if((grain[n].p.y>y1)&&(grain[n].p.y<y2)){
	   nh=(int)xr;
	   Medida_r[nh].vy+=grain[n].V.y;
	   Medida_r[nh].vx+=grain[n].V.x;
	   Medida_r[nh].N+=1.;
	   distr_total[nh].N+=1.;;
	   if(grain[n].V.y>0.){
	     distr_total[nh].p_vyp+=1.;
	   }else if(grain[n].V.y<0.){
	     distr_total[nh].p_vym+=1.;

	   }
	   //*****************************
	   if(grain[n].V.x>0.){
	     distr_total[nh].p_vxp+=1.;
	   }else if(grain[n].V.x<0.){
	     distr_total[nh].p_vxm+=1.;

	   }

	   
	 }

       
     }
     printf("Medida_r\n");
     //******************
     for(n=0;n<lm_t;++n){
       if( Medida_r[n].N>0.){
	 distr_total[n].vy+=Medida_r[n].vy*(1./Medida_r[n].N);
	 distr_total[n].vx+=Medida_r[n].vx*(1./Medida_r[n].N);
       }
     }


     ///  printf("Antes do cluste\n");;
     //firt region

 
     //   printf("saiu aqui\n");
     //  printf("depois do cluster\n");;
     if(!(dc%cyc)) {
          //meansure[tt].w3=ObsS[4].rot3*I_DA;
       ////***************
       meansure[tt].SSw1=ObsS[4].SSrot1*(1./cyc);
       meansure[tt].SSw2=ObsS[4].SSrot2*(1./cyc);
       ///mei
       meansure[tt].Phi1_N=Phi1_N*(1./cyc);
       meansure[tt].Phi2_N=Phi2_N*(1./cyc);
       meansure[tt].Phi3_N=Phi3_N*(1./cyc);
       meansure[tt].Phi4_N=Phi4_N*(1./cyc);
       Phi1_N=Phi2_N=Phi3_N=Phi4_N=0.;
       ///************************
       //mobilidade
       meansure[tt].Mobi1=Mobi1*(1./cyc);
       meansure[tt].Mobi2=Mobi2*(1./cyc);
       Mobi1=Mobi2=0.;
       //***************************
       meansure[tt].f1=meansure[tt].f2=0;
       meansure[tt].b1=meansure[tt].b2=0;
       meansure[tt].a1=meansure[tt].a2=0;
       for(n=0;n<NOBS;++n){
	 if(ObsS[n].form==10){
	   meansure[tt].f1=ObsS[n].f1*(1./cyc);
	   meansure[tt].f2=ObsS[n].f2*(1./cyc);
	 }else if(ObsS[n].form==1){
	   meansure[tt].b1+=ObsS[n].f1*(1./cyc);
	   meansure[tt].b2+=ObsS[n].f2*(1./cyc);

	 }else if(ObsS[n].form==0){
	   meansure[tt].a1+=ObsS[n].f1*(1./cyc);
	   meansure[tt].a2+=ObsS[n].f2*(1./cyc);
	 }
       }
       meansure[tt].f1*=(1./Mol);
       meansure[tt].f2*=(1./Mol);
       meansure[tt].b1*=(1./Mol);
       meansure[tt].b2*=(1./Mol);
       meansure[tt].a1*=(1./Mol);
       meansure[tt].a2*=(1./Mol);
       //*************************************************
       meansure[tt].essay_S.f1+=meansure[tt].f1;
       meansure[tt].essay_S.f2+=meansure[tt].f2;
       meansure[tt].essay_S.b1+=meansure[tt].b1;
       meansure[tt].essay_S.b2+=meansure[tt].b2;
       meansure[tt].essay_S.a1+=meansure[tt].a1;
       meansure[tt].essay_S.a2+=meansure[tt].a2;
       //*************************************************
       //g de r function and qua and tri
       printf("clust off\n");
       meansure[tt].psiHexObs=0.;//
       meansure[tt].psiSqrObs=0.;//
       InitClusters ();;
       Copy_Grains_Obs();;
       CompressClusters ();;
       AnalClusterSize ();;
       ++countRdf;
       printf("clust on\n");

       printf("tt=%d >> hex=%f and psi=%f\n",tt,meansure[tt].psiHexObs,meansure[tt].psiSqrObs);
       
       //mesure Rot!!
       
       ///********************************
       count1=count2=0.;
       cw1=cw2=0.;
       p1_count=p2_count=pt_count=0;
       //*******************************
       DA=ObsS[4].N;// that is number
       // ObsS[4].N=0.;
       if(DA==0){
	 I_DA=1.;
       
       }else{
	  I_DA=1./DA;
       }
       //fI_DA=0.25*I_DA;;
       //*****************************
       cw1=ObsS[4].rot*I_DA;///center
       meansure[tt].taxNw=ObsS[4].Nw*I_DA;;
       //*****************************
       DA=ObsS[1].diam*d0+d0*d0;
       I_DA=1./DA;
       fI_DA=0.25*I_DA;;
       //****************************
       //cw2=ObsS[4].rot*fI_DA*(1./cyc);
       printf("n=%f\n",ObsS[4].N);
       
       //****************************
       // vortice!
       //***************************
       meansure[tt].w1=cw1;
       
       DA=ObsS[4].N1;// that is number
       // ObsS[4].N=0.;
       if(DA==0){
	 I_DA=1.;
       
       }else{
	  I_DA=1./DA;
       }
       //fI_DA=0.25*I_DA;;
       //*****************************
        meansure[tt].w11=ObsS[4].rot1*I_DA;///center
	//
	DA=ObsS[4].N2;// that is number
       // ObsS[4].N=0.;
       if(DA==0){
	 I_DA=1.;
       
       }else{
	  I_DA=1./DA;
       }
       //fI_DA=0.25*I_DA;;
       //*****************************
        meansure[tt].w12=ObsS[4].rot2*I_DA;///center
	//
	 DA=ObsS[4].N3;// that is number
       // ObsS[4].N=0.;
       if(DA==0){
	 I_DA=1.;
       
       }else{
	  I_DA=1./DA;
       }
       //fI_DA=0.25*I_DA;;
       //*****************************
        meansure[tt].w13=ObsS[4].rot3*I_DA;///center
	//

	DA=ObsS[4].N4;// that is number
       // ObsS[4].N=0.;
       if(DA==0){
	 I_DA=1.;
       
       }else{
	  I_DA=1./DA;
       }
       //fI_DA=0.25*I_DA;;
       //*****************************
        meansure[tt].w14=ObsS[4].rot4*I_DA;///center
	
       //***************************
       DA=ObsS[1].diam*2+2*2;
       I_DA=1./DA;
       fI_DA=0.25*I_DA;;
       //****************************
       cw2=ObsS[4].rotp*fI_DA*(1./cyc);
       meansure[tt].wp=cw2;
       //***************************
       DA=ObsS[4].Np1;// that is number
       // ObsS[4].N=0.;
       if(DA==0){
	 I_DA=1.;
       
       }else{
	  I_DA=1./DA;
       }
       //fI_DA=0.25*I_DA;;
       //*****************************
       cw1=ObsS[4].rotp*I_DA;///center>> Here
       meansure[tt].w2=cw1;
       ///achi o erro
       meansure[tt].essay_S.cw3+=cw1;
       
       meansure[tt].taxNwp1=ObsS[4].Nwp*I_DA;;
       //****************************
       meansure[tt].essay_S.cw1+=meansure[tt].w1;
       meansure[tt].essay_S.cw2+=meansure[tt].w2;
       meansure[tt].essay_S.SSw1+=meansure[tt].SSw1;
       meansure[tt].essay_S.SSw2+=meansure[tt].SSw2;
        meansure[tt].essay_S.w3+=meansure[tt].w3;
       //****************************
       //NULL OBSTACLES
       //************
       for(n=0;n<NOBS;++n){
	 ObsS[n].Nw=0.;
	 ObsS[n].Nwp=0.;;
	 ObsS[n].Np1=0.;
	 ObsS[n].N=0.;
	 ObsS[n].N1=0.;
	 ObsS[n].N2=0.;
	 ObsS[n].N3=0.;
	 ObsS[n].N4=0.;
	 ObsS[n].rot=0.;
	 ObsS[n].rot1=0.;
	 ObsS[n].rot2=0.;
	 ObsS[n].rot3=0.;
	 ObsS[n].rot4=0.;
	 ObsS[n].rotp=0.;
	 ObsS[n].rot_u=0.;
	 ObsS[n].rotc=0.;
	 ObsS[n].DotFn=0.;
	 ObsS[n].N_rotp=0.;
	 ObsS[n].N_rotm=0.;
	 ObsS[n].N_rotp_r=0.;
	 ObsS[n].N_rotm_r=0.;
	 ObsS[n].N_rotp_l=0.;
	 ObsS[n].N_rotm_l=0.;
	 ObsS[n].f1=0.;
	 ObsS[n].f2=0.;
	 ObsS[n].SSrot2=0.;
	 ObsS[n].SSrot1=0.;
       
  }
       ///***************************************
       //*******************************
      
       /////////////////////
       ++tt;
     }
   }

   ///Get data!!
   
   //OUT FILES IN ONE ESSAY
   
   if(Nowcycles==NstepT){

  
     
     

   


     //Entretotal
     fp_prob=fopen(entretotal_plot[nessay],"w");
     aux=auxT=0.;
     auxM=0.;;
     aux1=aux2=0.;
     for(pp=0;pp<lm_t;++pp){
       auxT+=distr_total[pp].p_vym;
       aux+=distr_total[pp].p_vyp;
       auxM+=distr_total[pp].N;
       aux1+=distr_total[pp].p_vxm;
       aux2+=distr_total[pp].p_vxp;
     }
     for(pp=0;pp<lm_t;++pp){
       //  auxT=(Thecycle+(pp+1)*cyc)*stepT;
       distr_total[pp].p_vyp=distr_total[pp].p_vyp*(1./aux);;
       distr_total[pp].p_vym=distr_total[pp].p_vym*(1./auxT);;
       distr_total[pp].N=distr_total[pp].N*(1./auxM);
       distr_total[pp].p_vxm=distr_total[pp].p_vxm*(1./aux1);
       distr_total[pp].p_vxp=distr_total[pp].p_vxp*(1./aux2);
       fprintf(fp_prob,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",distr_total[pp].x,distr_total[pp].vy*(1./NstepMeida),distr_total[pp].vx*(1./NstepMeida),distr_total[pp].p_vym,distr_total[pp].p_vxm,distr_total[pp].p_vxp,distr_total[pp].p_vyp,distr_total[pp].N);
     }
     fclose(fp_prob);
     
     //entreobs
     


    //*************************************************
     //> The Radial Function
     fp_prob=fopen(f_r_plot[nessay],"w");
     for(pp=0;pp<N_f_r;++pp){
       if(f_r[pp].N==0.){
	 f_r[pp].N=1.;
       }
       f_r[pp].Wt*=1./f_r[pp].N;;
       f_r[pp].Vt*=1./f_r[pp].N;
       f_r[pp].Vn*=1./f_r[pp].N;;
       //**************
       auxT=1.;
       fprintf(fp_prob,"%lf\t%lf\t%lf\t%lf\n",auxT*pp,f_r[pp].Vt,f_r[pp].Vt,f_r[pp].Vn);
       //********************
       f_r[pp].Vn=0.;
       f_r[pp].Vt=0.;
       f_r[pp].Wt=0.;
       f_r[pp].N=0.;
     }
     fclose(fp_prob);
    
     //*************************************************

     fp_prob=fopen(Phi_Controle_plot[nessay],"w");
     for(pp=0;pp<NMEAS;++pp){
       //meansure[pp].psiSqrObs=meansure[pp].psiSqrObs*(1./Mol);
       ///meansure[pp].psiHexObs=meansure[pp].psiHexObs*(1./Mol);
       auxT=(Thecycle+(pp+1)*cyc)*stepT;
       fprintf(fp_prob,"%lf\t%lf\t%lf\t%lf\t%lf\n",auxT,meansure[pp].Phi1_N,meansure[pp].Phi2_N,meansure[pp].Phi3_N,meansure[pp].Phi4_N);
     }
     fclose(fp_prob);
     //****************************************************
     fp_prob=fopen(CSize_plot[nessay],"w");
     for(pp=0;pp<NMEAS;++pp){
       //meansure[pp].psiSqrObs=meansure[pp].psiSqrObs*(1./Mol);
       ///meansure[pp].psiHexObs=meansure[pp].psiHexObs*(1./Mol);
       auxT=(Thecycle+(pp+1)*cyc)*stepT;
       fprintf(fp_prob,"%lf\t%lf\n",auxT,meansure[pp].CM);
     }
     fclose(fp_prob);
     //****************************************************
     fp_prob=fopen(Mobility_plot[nessay],"w");
     for(pp=0;pp<NMEAS;++pp){
       // meansure[pp].psiSqrObs=meansure[pp].psiSqrObs*(1./Mol);
       // meansure[pp].psiHexObs=meansure[pp].psiHexObs*(1./Mol);
       auxT=(Thecycle+(pp+1)*cyc)*stepT;
       fprintf(fp_prob,"%lf\t%lf\t%lf\t%lf\t%lf\n",auxT,meansure[pp].Mobi1,meansure[pp].Mobi2,meansure[pp].Nmb1,meansure[pp].Nmb2);
     }
     fclose(fp_prob);
      //****************************************************
     fp_prob=fopen(wobs_plot[nessay],"w");
     for(pp=0;pp<NMEAS;++pp){
       meansure[pp].psiSqrObs=meansure[pp].psiSqrObs*(1./Mol);
       meansure[pp].psiHexObs=meansure[pp].psiHexObs*(1./Mol);
       auxT=(Thecycle+(pp+1)*cyc)*stepT;
       fprintf(fp_prob,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",auxT,meansure[pp].w1,meansure[pp].w2,meansure[pp].w3,meansure[pp].taxNw,meansure[pp].taxNwp1);
     }
     fclose(fp_prob);
     ///**************************************************************
     fp_prob=fopen(AllwS_plot[nessay],"w");
     for(pp=0;pp<NMEAS;++pp){
       //meansure[pp].psiSqrObs=meansure[pp].psiSqrObs*(1./Mol);
       //meansure[pp].psiHexObs=meansure[pp].psiHexObs*(1./Mol);
       auxT=(Thecycle+(pp+1)*cyc)*stepT;
       fprintf(fp_prob,"%lf\t%lf\t%lf\t%lf\t%lf\n",auxT,meansure[pp].w11,meansure[pp].w12,meansure[pp].w13,meansure[pp].w14);
     }
     fclose(fp_prob);
     //****************************************************************
     fp_prob=fopen(Superwobs_plot[nessay],"w");
     for(pp=0;pp<NMEAS;++pp){
       //meansure[pp].psiSqrObs=meansure[pp].psiSqrObs*(1./Mol);
       // meansure[pp].psiHexObs=meansure[pp].psiHexObs*(1./Mol);
       auxT=(Thecycle+(pp+1)*cyc)*stepT;
       fprintf(fp_prob,"%lf\t%lf\t%lf\n",auxT,meansure[pp].SSw1,meansure[pp].SSw2);
     }
     fclose(fp_prob);
     ///**************************************************************
     fp_prob=fopen(blocks_plot[nessay],"w");
     for(pp=0;pp<NMEAS;++pp){
       auxT=(Thecycle+(pp+1)*cyc)*stepT;
       fprintf(fp_prob,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",auxT,meansure[pp].f1,meansure[pp].f2,meansure[pp].b1,meansure[pp].b2,meansure[pp].a1,meansure[pp].a2);
     }
     fclose(fp_prob);
     //***************************************************************
     // EvalRdf
     deltaR=rangeRdf*(1. / sizeHistRdf);// deltaR
     a1=Sqr(L);
     a2=fpi*Sqr(Mol)*Sqr(deltaR)*countRdf;;
     normFac=a1*(1./a2);
     fp_prob=fopen(EvalRdf_plot[nessay],"w");
     for(pp=0;pp<sizeHistRdf;++pp){
       auxT=pp-0.5;
       histRdf[pp]*=normFac*(1./auxT);;
       fprintf(fp_prob,"%lf\t%lf\n",auxT*deltaR,histRdf[pp]);
       histRdf[pp]=0.;
     }
     fclose(fp_prob);
     
     //****************************************************
   

     
     //***************************************************************

     
     //********************************************************
     

     //********************************************************
     //                 regiao dos campos
     //********************************************************
     fp_prob=fopen(Field_plot[nessay],"w");
     for(pp=0;pp<lc;++pp){
       for(kk=0;kk<lc;++kk){
	 //auxT=(Thecycle+(pp+1)*cyc)*stepT;  NField
	 vx[pp][kk]=vx[pp][kk]*(1./NField);;
	 vy[pp][kk]=vy[pp][kk]*(1./NField);;
	 fprintf(fp_prob,"%d\t%d\t%lf\t%lf\n",pp,kk,vx[pp][kk],vy[pp][kk]);
	 vx[pp][kk]=0.;;
	 vy[pp][kk]=0.;;
       }
     }
     fclose(fp_prob);
     //*******************************************************
     fp_prob=fopen(psi_plot[nessay],"w");
     for(pp=0;pp<lc;++pp){
       for(kk=0;kk<lc;++kk){
	 //auxT=(Thecycle+(pp+1)*cyc)*stepT;
	 fprintf(fp_prob,"%d\t%d\t%lf\t%lf\n",pp,kk,psix[pp][kk],psiy[pp][kk]);

	 psix[pp][kk]=0.;
	 psiy[pp][kk]=0.;
       }
     }
     fclose(fp_prob);
     //*********************************************************

     fp_prob=fopen(PHI_FIELD_plot[nessay],"w");
     for(pp=0;pp<lc;++pp){
       for(kk=0;kk<lc;++kk){
	 //auxT=(Thecycle+(pp+1)*cyc)*stepT;
	 fprintf(fp_prob,"%d\t%d\t%lf\t%lf\n",pp,kk,phi_field[pp][kk],phi_field[pp][kk]);

	 phi_field[pp][kk]=0.;
	 phi_field[pp][kk]=0.;
       }
     }
     fclose(fp_prob);
     //********************************************************
     fp_prob=fopen(grain_plot[nessay],"w");
     for(pp=0;pp<Mol;++pp){
       fprintf(fp_prob,"%f\t%f\n",grain[pp].p.x,grain[pp].p.y);
     }
     fclose(fp_prob);
     //********************************************************

     /*fp_prob=fopen("linha_particular","w");
     for(pp=0;pp<NDOTS;++pp){
       fprintf(fp_prob,"%f\t%f\t%f\t%f\n",grain[n_dots].fx[pp],grain[n_dots].fy[pp],grain[n_dots].fvx[pp],grain[n_dots].fvy[pp]);
     }
     fclose(fp_prob);  */   
   }
   
}


void NullpointDis(int iten[],int lim){
  int i;
  for(i=0;i<lim;++i)
    iten[i]=-1;


}

void Linklist(int P[]){
  real aux_x,aux_y,f,intf;
  int n,nx,ny,mxy;
  real lengthCelula=2*diam;
  real Ilength;
  Ilength=1./lengthCelula;
  nx=ny=0;
  DO_MOL{
    aux_x=grain[n].p.x*Ilength;
    aux_y=grain[n].p.y*Ilength;
    f=modf(aux_x,&intf);  
    nx=(int)intf;
    f=modf(aux_y,&intf);  
    ny=(int)intf;
    //***************************************
    // Vtop(nx,ny,grain[n].p,lengthCelula);
    mxy=Mx*ny+nx;
    //  if(n==1000)
    //  printf("%d\t %d\t %f\n",nx,ny,grain[n].p.x);
      P[n]=P[Mol+mxy];
      P[Mol+mxy]=n;
  }

 
}

void ZeroForce(){
  int n;
  DO_MOL{
     VZero(grain[n].Force);
  }

}

void Computforce(int P[] ){
  vecreal diff;
  real D, dell,deshx,deshy;
  int mx,my,mxy,mxs,mys,mxys,l;
  int  hat;
  int ted;
  int flag1,flag2;
  real fx,fy,ri;
  flag1=flag2=0;
  // FILE * fp;
  // if( Nowcycles>391300){
  // printf("I am %d\n",Nowcycles);
    //fp=fopen("interation.dat","w");
  // }
  for(my=0;my<My;my++){
    for(mx=0;mx<Mx;mx++){
      mxy=Mx*my+mx;
      for(l=0;l<NUMOOFSET;++l){
	mxs=mx+sx[l];
	mys=my+sy[l];
	deshx=0.;
	deshy=0.;
	//VWrap_OFF(mxs,mys,Mx,ted,P[Mol+mxys]);////!!!!
	if(mxs==Mx){
	  mxs=0;
	  deshx=L;
	  // ted=NULL_INT;
	  
	}else if(mxs<0){
	  mxs=Mx-1;
	  deshx=-L;
	}
	
	if(mys==My){
	  mys=0;
	  deshy=L;
	}
      
      mxys=Mx*mys+mxs;
      ted=P[Mol+mxy];
      while(ted!=NULL_INT){
	hat=P[Mol+mxys];
	  while(hat!=NULL_INT){
	    if(l>0 || hat >ted){
	      VSub(diff,grain[ted].p,grain[hat].p);
	      diff.x-=deshx;
	      diff.y-=deshy;
	      D=sqrt(VSQ(diff));
	      dell=diam-D;// Ri+RJ-D
	      ri=1./D;
	      if(diam>D){
		//	if( Nowcycles>391300){
		// printf("p1=%d \t p2=%d  D=%lf p1=(%lf , %lf) and p2=(%lf , %lf)\n",ted,hat,D,grain[ted].p.x,grain[ted].p.y,grain[hat].p.x,grain[hat].p.y);
		  //fclose(fp);
		  
		//	}

		fx=kappa*dell*ri;
		fy=kappa*dell*ri;
		grain[hat].Force.x-=fx*diff.x;
		grain[hat].Force.y-=fy*diff.y;
		grain[ted].Force.x+=fx*diff.x;
		grain[ted].Force.y+=fy*diff.y;
		
		
		//	increment_Force(hat,ted,D,diff,dell);//cuidado!
	      }
	    }
	    hat=P[hat];
	  }

	  ted=P[ted];
	}
      }
    }
  }
  //if( Nowcycles==391400) exit(-1);
}

//************************************
void Computforce_Half(int P[] ){
  vecreal diff;
  real D, dell,deshx,deshy;
  int mx,my,mxy,mxs,mys,mxys,l;
  int  hat;
  int ted;
  int flag1,flag2;
  real fx,fy,ri;
  flag1=flag2=0;
  // FILE * fp;
  // if( Nowcycles>391300){
  // printf("I am %d\n",Nowcycles);
    //fp=fopen("interation.dat","w");
  // }
  for(my=0;my<My;my++){
    for(mx=0;mx<Mx;mx++){
      mxy=Mx*my+mx;
      for(l=0;l<NUMOOFSET;++l){
	mxs=mx+sx[l];
	mys=my+sy[l];
	deshx=0.;
	deshy=0.;
	//VWrap_OFF(mxs,mys,Mx,ted,P[Mol+mxys]);////!!!!
	if(mxs==Mx){
	  mxs=0;
	  deshx=L;
	  // ted=NULL_INT;
	  
	}else if(mxs<0){
	  mxs=Mx-1;
	  deshx=-L;
	}
	
	if(mys==My){
	  mys=0;
	  deshy=L;
	}
      
      mxys=Mx*mys+mxs;
      ted=P[Mol+mxy];
      while(ted!=NULL_INT){
	hat=P[Mol+mxys];
	  while(hat!=NULL_INT){
	    if(l>0 || hat >ted){
	      VSub(diff,grain[ted].HalfP,grain[hat].HalfP);
	      diff.x-=deshx;
	      diff.y-=deshy;
	      D=sqrt(VSQ(diff));
	      dell=diam-D;// Ri+RJ-D
	      ri=1./D;
	      if(diam>D){
		//	if( Nowcycles>391300){
		// printf("p1=%d \t p2=%d  D=%lf p1=(%lf , %lf) and p2=(%lf , %lf)\n",ted,hat,D,grain[ted].p.x,grain[ted].p.y,grain[hat].p.x,grain[hat].p.y);
		  //fclose(fp);
		  
		//	}

		fx=kappa*dell*ri;
		fy=kappa*dell*ri;
		grain[hat].Force.x-=fx*diff.x;
		grain[hat].Force.y-=fy*diff.y;
		grain[ted].Force.x+=fx*diff.x;
		grain[ted].Force.y+=fy*diff.y;
		
		
		//	increment_Force(hat,ted,D,diff,dell);//cuidado!
	      }
	    }
	    hat=P[hat];
	  }

	  ted=P[ted];
	}
      }
    }
  }
  //if( Nowcycles==391400) exit(-1);
}

void Nullpoint(int iten[]){
  int i,lim;
  lim=Mol+Mx*My;
  for(i=0;i<lim;++i)
    iten[i]=-1;


}




void ComputOnObs(int part){
  int nk,Cx,Cy,nx,ny,l,mxs,mys,ted,mxys,i,side_obs;
  real dcc,dell,r;
  vecreal diff;
  side_obs=sqrt(NOBS);
  Cy=Cx=side_obs;
  dcc=L/side_obs;
  
  int SingleSS[Mol+Cx*Cy];
  //for(i=0;i<Mol+Cx*Cy;++i)
  //SingleSS[i]=-1;
  NullpointDis(SingleSS,Mol+Cx*Cy);
  if(part==1){
    nk=0;
    GLinklist(SingleSS,dcc,Cx,1);

    //printf("junior p=%d\n",SingleSS[Mol+101]);
    for(ny=0;ny<Cy;++ny){
      for(nx=0;nx<Cx;++nx){
	for(l=0;l<NUMOOFSET;++l){
	  mxs=nx+sx[l];
	  mys=ny+sy[l];
	  mxys=Cx*mys+mxs;
	  VWrap_OFF(mxs,mys,Cx,ted,SingleSS[Mol+mxys]);
	  //	printf("ted is %d,nx=%d and ny=%d and mxys=%d\n",ted,nx,ny,mxys);
	
	while(ted!=NULL_INT){
	  //  printf("ted=%d\n",ted);
	  VSub(diff,ObsS[nk],grain[ted].p);
	  ObsFormC(nk,ted,diff);   
	  ted=SingleSS[ted];
	  };
	
      }
      ++nk;
    }
  }


  }else{

    nk=0;
    GLinklist(SingleSS,dcc,Cx,2);//eita
    for(ny=0;ny<Cy;++ny){
      for(nx=0;nx<Cx;++nx){
	for(l=0;l<NUMOOFSET;++l){
	mxs=nx+sx[l];
	mys=ny+sy[l];
	mxys=Cx*mys+mxs;
	VWrap_OFF(mxs,mys,Cx,ted,SingleSS[Mol+mxys]);
	
	while(ted!=NULL_INT){
	  VSub(diff,ObsS[nk].temp,grain[ted].HalfP);
	  ObsFormC(nk,ted,diff);	     
	  ted=SingleSS[ted];
	};
	
	}
      ++nk;
      }
    }
    
    

  }
}


void TesteCompObsS(int part){
  int n,ob;
  vecreal  diff,diffO,normal,F_aux;
  real r,dell;
  real fac,ri,parD,theta;
  int cyc;
  // cyc=(NstepT-Thecycle)/NMEAS;
  if(part==1){
    for(ob=0;ob<NOBS;++ob){
      DO_MOL{
	VSub(diff,ObsS[ob],grain[n].p);
	VSub(diffO,grain[n].p,ObsS[ob]);
	theta=Vatan(diffO);
	normal.x=cos(theta);
	normal.y=sin(theta);
	r=sqrt(VSQ(diff));
	ri=1./r;
	parD=0.5*diam + 0.5*ObsS[ob].diam;
	dell=parD-r;
	if(parD>r){
	  fac=kappaObs*dell*ri;
	  grain[n].Force.x-=fac*diff.x;
	  grain[n].Force.y-=fac*diff.y;
	  F_aux.x=-fac*diff.x;
	  F_aux.y=-fac*diff.y;
	  ObsS[ob].DotFn+=VDot(F_aux,normal);
	    }
      }
      
    }
  }else{


for(ob=0;ob<NOBS;++ob){
      DO_MOL{
	VSub(diff,ObsS[ob],grain[n].HalfP);
	r=sqrt(VSQ(diff));
	dell=0.5*diam + 0.5*ObsS[ob].diam-r;
	if(dell>0.){
	  grain[n].Force.x-=kappaObs*dell*diff.x*(1./r);
	   grain[n].Force.y-=kappaObs*dell*diff.y*(1./r);
	    }
      }
      
    }
  }

  
}




void Euler(int part){
  int n,M;
  vecreal Fvelo,vector_rho,vfk;
  real aux_x,aux_y,theta_k;//,ConsR=sqrt(2*stepT*Mt);
  real Constheta=sqrt(2*stepT*noiseTheta);

  if(part==1){
     DO_MOL{
      Vset(vector_rho,v0*cos(grain[n].theta),v0*sin(grain[n].theta));
      grain[n].rho.x=vector_rho.x;
      grain[n].rho.y=vector_rho.y;
      VAdd(grain[n].Increp,grain[n].Force,vector_rho);
      VsetTrue(grain[n].V,grain[n].Increp);
      grain[n].p.x+=grain[n].Increp.x*stepT;
      grain[n].p.y+=grain[n].Increp.y*stepT;
      Gaussian(&aux_x,&aux_y);
      grain[n].theta+=Constheta*aux_x;
     }
  }

}



void Runge_Kutta(int path){
  int n,M;   
  vecreal Fvelo,vector_rho,vfk;
  real aux_x,aux_y,theta_k;//,ConsR=sqrt(2*stepT*Mt);
  real Constheta=sqrt(2*stepT*noiseTheta);
  real aux_thetaD,aux_v_x,aux_v_y,DT_half;
  M=20;/// number total theta values exter
  //  theta_k=k_theta* M_PI*(1./(M-1))*0.5;
  DT_half=stepT*0.5;
  
  vfk.x=0;//fk
  vfk.y=0;//fk
  
  if(path==1){
    

    
    DO_MOL{
      //set position initial
       //***************************************************
       VsetTrue(grain[n].ri,grain[n].p);
      /*        define Half positions and angles          */
      VsetTrue(grain[n].HalfP,grain[n].p);//x_half=x
      Vtheta(grain[n].HalfT,grain[n].theta);//theta_half=theta 
      //***************************************************
      /*                F1 integration                            */
      Vset(vector_rho,v0*cos(grain[n].theta),v0*sin(grain[n].theta));//define v_p
      VAdd(grain[n].F1,grain[n].Force,vector_rho);//F1=force+v_p
      //**************************************************
      /*            get  v_p                            */
      grain[n].rho.x=vector_rho.x;
      grain[n].rho.y=vector_rho.y;	
      //**************************************************
      /*              r_half is updated                 */
      VVSadp(grain[n].HalfP,grain[n].F1,stepT);//r=r0+DT*F1
      //**************************************************
      /*                 true r                         */
      //VVSadp(grain[n].Trueposi,grain[n].F1,0.5*stepT);
      //**************************************************
      /*                 theta temp                     */
      Gaussian(&aux_x,&aux_y);
      grain[n].f1_theta=Constheta*aux_x;
      grain[n].HalfT.theta+=grain[n].f1_theta;
      ///stopped here
    }
  }else{

    DO_MOL{
      //***************************************************
      /*           theta final                           */
      Gaussian(&aux_x,&aux_y);
      grain[n].f2_theta=Constheta*aux_x;
      aux_thetaD=grain[n].f2_theta+grain[n].f1_theta;
      grain[n].theta+=aux_thetaD*0.5;
      //***************************************************
      /*                F2 integration                            */
      Vset(vector_rho,v0*cos(grain[n].HalfT.theta),v0*sin(grain[n].HalfT.theta));   
      VAdd(grain[n].F2,grain[n].Force,vector_rho);//F1=force+v_p
      //***************************************************
      /*                r and v  updated                            */
      aux_v_x=grain[n].F1.x+grain[n].F2.x;
      aux_v_y=grain[n].F1.y+grain[n].F2.y;
      //>>>>>>>>>>>r
      grain[n].p.x+=DT_half*aux_v_x;;
      grain[n].p.y+=DT_half*aux_v_y;;;
      //>>>>>>>>>>>v
      grain[n].V.x=0.5*aux_v_x;;
      grain[n].V.y=0.5*aux_v_y;;;

    }

  }

}

void Boundary_Condition_Half(){
  int n;
  DO_MOL VWrapAll(grain[n].HalfP);
}

void Linklist_Half(int P[]){
  real aux_x,aux_y,f,intf;
  double lengthCelula=2*diam;
  int n,nx,ny,mxy;
  real Ilength;
  Ilength=1./lengthCelula;
  DO_MOL{
    aux_x=grain[n].HalfP.x*Ilength;
    aux_y=grain[n].HalfP.y*Ilength;
    f=modf(aux_x,&intf);  
    nx=(int)intf;
    f=modf(aux_y,&intf);  
    ny=(int)intf;
    //******************************
    mxy=Mx*ny+nx;
    P[n]=P[Mol+mxy];
    P[Mol+mxy]=n;
  }

}





void Boundary_Condition(){
  int n;
  DO_MOL VWrapAll(grain[n].p);    
}

void increment_Force(int p1,int p2,double D,vecreal diff,double dell){
  double kx;
  kx=kappa*dell*(1./D);
  VFORCE(grain[p1].Force,grain[p2].Force,diff,kx);
}

void GLinklist(int P[],real lenghtCC,int MCC,int part){
  int n,nx,ny,mxy;
  nx=ny=0;
  //printf("MCC is %d\n",MCC);
  if(part==1){
  DO_MOL{
    Vtop(nx,ny,grain[n].p,lenghtCC);
    mxy=MCC*ny+nx;
    /// if(mxy==101){
      // printf("junior aqui %d\n",n);
      // }
    P[n]=P[Mol+mxy];
    P[Mol+mxy]=n;
  }
  } else {

    DO_MOL{
    Vtop(nx,ny,grain[n].HalfP,lenghtCC);
    mxy=MCC*ny+nx;
    P[n]=P[Mol+mxy];
    P[Mol+mxy]=n;
    }
  }
 
}


///Random Functions

real Realrand(){

  static int seed1=786757123;
  static int seed2=898665412;
  static int rngCount=0;
  ++rngCount;
 seed1=AMAG*seed1+BMAG;
 if(rngCount>100000000){
   rngCount=0;
   seed1=CMAG*seed2;
   seed2=seed1;
 }


 double aux=seed1/(2.*IMAX);

 return aux;
}


void Gaussian(double *gaussX, double *gaussY)
{
  static int seed1=985412623;
  static int seed2=176355681;
  static int rngCount=0;
  double v1,v2,rsq,fac;

  do {
    seed1 = AMAG*seed1+BMAG;
    ++rngCount;
    if(rngCount>100000000) {
      rngCount = 0;
      seed1 = CMAG*seed2;
      seed2 = seed1;
    }
    v1 = seed1/(2.*IMAX);

    seed1 = AMAG*seed1+BMAG;
    ++rngCount;
    if(rngCount>100000000) {
      rngCount = 0;
      seed1 = CMAG*seed2;
      seed2 = seed1;
    }
    v2 = seed1/(2.*IMAX);

    rsq = v1*v1+v2*v2;
  } while(rsq >= 1. || rsq == 0.);
  fac = sqrt(-2.*log(rsq)/rsq);
  *gaussX = v1*fac;
  *gaussY = v2*fac;
}



real Setnoisetheta(){

  static int seed1=786757123;
  static int seed2=898665412;
  static int rngCount=0;
  ++rngCount;
 seed1=AMAG*seed1+BMAG;
 if(rngCount>100000000){
   rngCount=0;
   seed1=CMAG*seed2;
   seed2=seed1;
 }


 double aux=seed1/(2.*IMAX);

 aux=aux*M_PI*2;

 return aux;
}


///Random Functions

void Zero_array(real vp[],int lim){
  int i;
  for(i=0;i<lim;++i){
    vp[i]=0.;;
  }
}

void ObsFormC(int nObs,int ted,vecreal  diff){

  int c;
  real dell,r;
  c=ObsS[nObs].form;
    if(c==0){
    r=sqrt(VSQ(diff));
    dell=0.5*diam+0.5*diamObs-r;
  if(dell>0){
  grain[ted].Force.x-=kappaObs*dell*diff.x*(1./r);
        grain[ted].Force.y-=kappaObs*dell*diff.y*(1./r);
   }
    
  }

  if(c==1){
    
    
 r=sqrt(VSQ(diff));
    dell=0.5*diam+0.5*diamObs-r;
  if(dell>0){
    grain[ted].Force.x-=kappaObs*dell*diff.x*(1./r);
    grain[ted].Force.y-=kappaObs*dell*diff.y*(1./r);
   }
      
 
  }

  //if(c==0){


  /*   if(diff.x<0.){
     r=sqrt(VSQ(diff));
      dell=0.5*diam+0.5*diamObs-r;
      if(dell>0){
	grain[ted].Force.x-=kappaObs*dell*diff.x*(1./r);
	grain[ted].Force.y-=kappaObs*dell*diff.y*(1./r);
      }
      
    }else if(fabs(diff.y)<=diamObs*0.5){
      diff.y=0.;
      r=sqrt(VSQ(diff));
      dell=0.5*diam-r;
      if(dell>0){
	grain[ted].Force.x-=kappaObs*dell*diff.x*(1./r);
	//// grain[ted].Force.y-=kappaObs*dell*diff.y*(1./r);
      }
	      
    }

    
  }
  */
}

void M(int arr[],int x,int limit){
  int i;
  for(i=x;i<limit-1;++i){
    arr[i]=arr[i+1];
  }


}

void Compt_Regular_Obs(){
  int nx,ny,n,nr,M0;
  int f,mx,my;
  real fpi;
  vecreal diff,r_p,r_pp;
  real Dl,r2,r,dij,theta;
  real deshx,deshy,dell,fac,Ir;
  int Qua[4];
  int NH;
  int teste;
  teste=0;
  if(Nowcycles==50000){
    teste=1;
  }
  NH=4;
  Qua[0]=1;
  Qua[1]=3;
  Qua[2]=5;
  Qua[3]=7;
  //**************************
  Dl=L*(1./3);;
  M0=n_celula;
  fpi=3.1415926;
  DO_MOL{
    nx=(int)grain[n].p.x*(1./Dl);
    ny=(int)grain[n].p.y*(1./Dl);
    //*****************************
    ///****************************
    nr=M0*ny+nx;
    //	printf(">>>>>>>>>>>nr=%d\n",nr);;
    ///if(ObsS[nr].form!=0){// every non- Null
      if(nr==4){
	///************************
	if(ObsS[nr].form==10){
	  VSub(diff,ObsS[nr],grain[n].p);;
	  r2=VSQ(diff);
	  r=sqrt(r2);;
	  dij=ObsS[nr].diam*0.5+0.5;
	  if(dij>r){
	    Ir=1./r;;
	    dell=dij-r;
	    fac=kappaObs*dell*Ir;
	    grain[n].Force.x-=fac*diff.x;
	    grain[n].Force.y-=fac*diff.y;
	  }
	}///
	///*****************************
	//end  nh=4
	// interation  center
	for(f=0;f<NH;++f){
	  if(ObsS[Qua[f]].form!=0){
	    VSub(diff,grain[n].p,ObsS[Qua[f]]);;
	    theta=ObsS[Qua[f]].theta*fpi*(1./180);
	    r_p.y=sin(theta)*diff.x+cos(theta)*diff.y;
	    r_p.x=cos(theta)*diff.x-sin(theta)*diff.y;
	    if(r_p.y>0.){
	      
	      //curve part
	      r2=VSQ(diff);
	      r=sqrt(r2);;
	      dij=ObsS[Qua[f]].diam*0.5+0.5;
	      if(dij>r){
		 if((teste==1)&&(f==0)){
		printf("r_poy=%f,%d, x=%f, y=%f\n",r_pp.y,n,grain[n].p.x,grain[n].p.y);
	      }
		Ir=1./r;;
		dell=dij-r;
		fac=kappaObs*dell*Ir;
		grain[n].Force.x+=fac*diff.x;
		grain[n].Force.y+=fac*diff.y;
	      }
	      //end
	    }else if(fabs(r_p.x)<=diamobsr*0.5){
	      r_p.x=0.;
	      theta=-theta;
	      r_pp.y=sin(theta)*r_p.x+cos(theta)*r_p.y;
	      r_pp.x=cos(theta)*r_p.x-sin(theta)*r_p.y;
	      //
	     
	      r2=VSQ(r_pp);
	      r=sqrt(r2);;
	      dij=0.5;
	      if(dij>r){
		Ir=1./r;;
		dell=dij-r;
		fac=kappaObs*dell*Ir;
		grain[n].Force.x+=fac*r_pp.x;
		grain[n].Force.y+=fac*r_pp.y;
	      }
	    }
	  }
	}
	  //end for
      }else{// if se  for nh!=4
	if(ObsS[nr].form!=0){
	  VSub(diff,grain[n].p,ObsS[nr]);;
	  theta=ObsS[nr].theta*fpi*(1./180);
	  r_p.y=sin(theta)*diff.x+cos(theta)*diff.y;
	  r_p.x=cos(theta)*diff.x-sin(theta)*diff.y;
	  if(r_p.y>0.){
	    //curve part
	    r2=VSQ(diff);
	    r=sqrt(r2);;
	    dij=ObsS[nr].diam*0.5+0.5;
	    if(dij>r){
	      Ir=1./r;;
	      dell=dij-r;
	      fac=kappaObs*dell*Ir;
	      grain[n].Force.x+=fac*diff.x;
	      grain[n].Force.y+=fac*diff.y;
	    }
	    //end
	  }else if(fabs(r_p.x)<=diamobsr*0.5){
	    r_p.x=0.;
	    theta=-theta;
	    r_pp.y=sin(theta)*r_p.x+cos(theta)*r_p.y;
	    r_pp.x=cos(theta)*r_p.x-sin(theta)*r_p.y;
	    //
	    r2=VSQ(r_pp);
	    r=sqrt(r2);;
	    dij=0.5;
	    if(dij>r){
	      Ir=1./r;;
	      dell=dij-r;
	      fac=kappaObs*dell*Ir;
	      grain[n].Force.x+=fac*r_pp.x;
	      grain[n].Force.y+=fac*r_pp.y;
	    }
	  }
	  
	}
	//
	
      }
      
    
  }

  
}
//*****************************

void Compt_Regular_Obs_Half(){
  ///
  int nx,ny,n,nr,M0;
  int f,mx,my;
  real fpi;
  vecreal diff,r_p,r_pp;
  real Dl,r2,r,dij,theta;
  real deshx,deshy,dell,fac,Ir;
  int Qua[4];
  int NH;
  NH=4;
  Qua[0]=1;
  Qua[1]=3;
  Qua[2]=5;
  Qua[3]=7;
  //**************************
  Dl=L*(1./3);;
  M0=n_celula;
  fpi=3.1415926;
  DO_MOL{
    nx=(int)grain[n].HalfP.x*(1./Dl);
    ny=(int)grain[n].HalfP.y*(1./Dl);
    //*****************************
    ///****************************
    nr=M0*ny+nx;
    //	printf(">>>>>>>>>>>nr=%d\n",nr);;
    // if(ObsS[nr].form!=0){
    if(nr==4){
      if(ObsS[nr].form==10){
	VSub(diff,ObsS[nr],grain[n].HalfP);;
	r2=VSQ(diff);
	r=sqrt(r2);;
	dij=ObsS[nr].diam*0.5+0.5;
	if(dij>r){
	  Ir=1./r;;
	  dell=dij-r;
	  fac=kappaObs*dell*Ir;
	  grain[n].Force.x-=fac*diff.x;
	  grain[n].Force.y-=fac*diff.y;
	}
      }
      //conta a interação do meio
      for(f=0;f<NH;++f){
	if(ObsS[Qua[f]].form!=0){
	    VSub(diff,grain[n].HalfP,ObsS[Qua[f]]);;
	    theta=ObsS[Qua[f]].theta*fpi*(1./180);
	    r_p.y=sin(theta)*diff.x+cos(theta)*diff.y;
	    r_p.x=cos(theta)*diff.x-sin(theta)*diff.y;
	    if(r_p.y>0.){
	      //curve part
	      r2=VSQ(diff);
	      r=sqrt(r2);;
	      dij=ObsS[Qua[f]].diam*0.5+0.5;
	      if(dij>r){
		Ir=1./r;;
		dell=dij-r;
		fac=kappaObs*dell*Ir;
		grain[n].Force.x+=fac*diff.x;
		grain[n].Force.y+=fac*diff.y;
	      }
	      //end
	    }else if(fabs(r_p.x)<=diamobsr*0.5){
	      r_p.x=0.;
	      theta=-theta;
	      r_pp.y=sin(theta)*r_p.x+cos(theta)*r_p.y;
	      r_pp.x=cos(theta)*r_p.x-sin(theta)*r_p.y;
	      //
	      r2=VSQ(r_pp);
	      r=sqrt(r2);;
	      dij=0.5;
	      if(dij>r){
		Ir=1./r;;
		dell=dij-r;
		fac=kappaObs*dell*Ir;
		grain[n].Force.x+=fac*r_pp.x;
		grain[n].Force.y+=fac*r_pp.y;
	      }
	    }
	} 
	    
	  }// for
	  //************************************
      }else{
     if(ObsS[nr].form!=0){
	VSub(diff,grain[n].HalfP,ObsS[nr]);;
	theta=ObsS[nr].theta*fpi*(1./180);
	r_p.y=sin(theta)*diff.x+cos(theta)*diff.y;
	r_p.x=cos(theta)*diff.x-sin(theta)*diff.y;
	if(r_p.y>0.){
	  //curve part
	  r2=VSQ(diff);
	  r=sqrt(r2);;
	  dij=ObsS[nr].diam*0.5+0.5;
	  if(dij>r){
	    Ir=1./r;;
	    dell=dij-r;
	    fac=kappaObs*dell*Ir;
	    grain[n].Force.x+=fac*diff.x;
	    grain[n].Force.y+=fac*diff.y;
	  }
	  //end
	}else if(fabs(r_p.x)<=diamobsr*0.5){
	  r_p.x=0.;
	  theta=-theta;
	  r_pp.y=sin(theta)*r_p.x+cos(theta)*r_p.y;
	  r_pp.x=cos(theta)*r_p.x-sin(theta)*r_p.y;
	  //
	  r2=VSQ(r_pp);
	  r=sqrt(r2);;
	  dij=0.5;
	  if(dij>r){
	    Ir=1./r;;
	    dell=dij-r;
	    fac=kappaObs*dell*Ir;
	    grain[n].Force.x+=fac*r_pp.x;
	    grain[n].Force.y+=fac*r_pp.y;
	  }
	}

      }
      //
      
	}
	
    
   }
  //?


  
 
}
///**********************************
///**********************************
void Copy_Grains_Obs()
{
  int n,count;
  real x_final,x_initial;
  real y_final,y_initial;
  real aux_p;;
  x_initial=ObsS[0].x+ObsS[0].diam*0.5;;
  x_final=x_initial+a0;;
  ///*******************************
  /*
  aux_p=ObsS[0].diam*0.5+10.;
  y_initial=ObsS[0].y-aux_p;;
  y_final=ObsS[0].y+aux_p;;
    count=0;
    DO_MOL{
      //*******************************************************
      if((grain[n].p.x>x_initial)&&(grain[n].p.x<x_final)){
	if((grain[n].p.y>y_initial)&&(grain[n].p.y<y_final)){
	  grain_copy[count].r.x=grain[n].p.x;
	  grain_copy[count].r.y=grain[n].p.y;
	  grain_copy[count].v.x=grain[n].V.x;
	  grain_copy[count].v.y=grain[n].V.y;
	  grain_copy[count].n=n;
	  ++count;;
	}
      }
    
  }
    Mol_copy=count;
  */
    //***************************
    int n1,n2;;
    vecreal diff;;
    real rr,r;
    real rrClust;;
    rrClust=rClust*rClust;;
    //intiaçl condio
    /*
    
    for(n1=0;n1<Mol_copy;++n1){
      for(n2=n1+1;n2<Mol_copy;++n2){
	VSub(diff,grain_copy[n1].r,grain_copy[n2].r);;
	rr=VSQ(diff);;
	if (rr < rrClust) AddBondedPair (n1, n2);

      }
      }*/
    //**********************************vai de outro

    
    int P[Mol+Mx*My];
    int lim;
    lim=Mol+Mx*My;
    for(n=0;n<lim;++n){
      P[n]=-1;
    }
    //li
     double lengthCelula=2*diam;
     int nx,ny,mxy;
  DO_MOL{
    Vtop(nx,ny,grain[n].p,lengthCelula);
    mxy=Mx*ny+nx;
    P[n]=P[Mol+mxy];
    P[Mol+mxy]=n;
  }
    
    real D, dell,deshx,deshy;
    int mx,my,mxs,mys,mxys,l;
    int  hat;
    int ted;
    int flag1,flag2;
    real fx,fy,ri;
    flag1=flag2=0;
  // FILE * fp;
  // if( Nowcycles>391300){
  // printf("I am %d\n",Nowcycles);
    //fp=fopen("interation.dat","w");
  // }
    // printf("rrClust=%f\n",rrClust);;
    for(my=0;my<My;my++){
      for(mx=0;mx<Mx;mx++){
	mxy=Mx*my+mx;
	for(l=0;l<NUMOOFSET;++l){
	mxs=mx+sx[l];
	mys=my+sy[l];
	deshx=0.;
	deshy=0.;
	//VWrap_OFF(mxs,mys,Mx,ted,P[Mol+mxys]);////!!!!
	if(mxs==Mx){
	  mxs=0;
	  deshx=L;
	  // ted=NULL_INT;
	  
	}else if(mxs<0){
	  mxs=Mx-1;
	  deshx=-L;
	}
	
	if(mys==My){
	  mys=0;
	  deshy=L;
	}
      
	mxys=Mx*mys+mxs;
	ted=P[Mol+mxy];
	while(ted!=NULL_INT){
	  hat=P[Mol+mxys];
	  while(hat!=NULL_INT){
	    if(l>0 || hat >ted){
	      VSub(diff,grain[ted].p,grain[hat].p);
	      diff.x-=deshx;
	      diff.y-=deshy;
	      rr=VSQ(diff);
	      //    printfe("rr=%f\n",rr);;
	      if(rr<=rrClust){
		//printf("in codition to be clust\n");;
		AddBondedPair (ted, hat);
		//here******************************
		
		//**********************************
		//	printf("saiu\n");;
		//	printf(">>>nClust=%d\n",nClust);
	      }
	    }
	    hat=P[hat];
	  }

	  ted=P[ted];
	}
      }
    }
  }
    //***********************************************
}






void AddBondedPair (int j1, int j2)
{
  int cBig, cSmall, m, mp, nc1, nc2;
  nc1 = grain[j1].inClust;
  nc2 = grain[j2].inClust;
  
  if (nc1 < 0 && nc2 < 0) {
    grain[j1].inClust = nClust;
    grain[j2].inClust = nClust;
    clust[nClust].size = 2;
    clust[nClust].head = j1;
    clust[j1].next = j2;
    clust[j2].next = -1;
    ++ nClust;
  } else if (grain[j1].inClust < 0) {
    grain[j1].inClust = nc2;
    clust[j1].next = clust[nc2].head;
    clust[nc2].head = j1;
    ++ clust[nc2].size;
  } else if (grain[j2].inClust < 0) {
    grain[j2].inClust = nc1;
    clust[j2].next = clust[nc1].head;
    clust[nc1].head = j2;
    ++ clust[nc1].size;
  } else {
    if (nc1 != nc2) {

      if(nc1 > nc2){
	cBig=nc1;
      }else{
	cBig =nc2;
      }
      cSmall = nc1 + nc2 - cBig;
      for (m = clust[cSmall].head; m >= 0; m = clust[m].next) {
	grain[m].inClust = cBig;
	mp = m;
      }
      clust[mp].next = clust[cBig].head;
      clust[cBig].head = clust[cSmall].head;
      clust[cBig].size += clust[cSmall].size;
      clust[cSmall].size = 0;
    }
  }
  
}

///
void InitClusters ()
{
  int n;
  DO_MOL {
    grain[n].inClust = -1;
    clust[n].obs[0]=0;;
    clust[n].obs[1]=0;;
  }
  nClust = 0;
}
//**********************
void CompressClusters ()
{
  int j, m, nc;
  nc = 0;
  for (j = 0; j < nClust; j ++) {
    if (clust[j].size > 0) {
      clust[nc].head = clust[j].head;
      clust[nc].size = clust[j].size;
      for (m = clust[nc].head; m >= 0; m = clust[m].next)
	grain[m].inClust = nc;
      ++ nc;
    }
  }
  nClust = nc;
}
////
void AnalClusterSize ()
{
  int cBig, ncUse,Vsize;
    ////
  int nx,ny,m;
  real yI,yF;;
  int nc,n1,flag,st;
  real rrClust_h[2],rr,r,Dx,x1,x2,Dx2;;
  vecreal diff;
  int NCC;
  int cyc,aux_I;
  real Dl;
  real yd1,yd2,yu1,yu2;
  real nup,ndow;
  real deltaR,auxR;
  int nrdf;
  real aux1,aux2,aux3,aux4,nNeig;
  real theta,Dot;
  vecreal psi;
  real Nmb1,Nmb2;
  deltaR=rangeRdf*(1./sizeHistRdf);
  //********************
  Dl=L*0.5;
  cyc=(NstepT-Thecycle)/NMEAS;;
  x1=ObsS[0].x+ObsS[0].diam*0.5;
  x2=x1+a0;
  rrClust_h[0]=(ObsS[0].diam*0.5+0.5+0.01)*(ObsS[0].diam*0.5+0.5+0.01);;
  rrClust_h[1]=(ObsS[1].diam*0.5+0.5+0.01)*(ObsS[1].diam*0.5+0.5+0.01);;
  yI=ObsS[0].y-ObsS[0].diam*0.5;;
  yF=ObsS[0].y+ObsS[0].diam*0.5;;
  NCC=0;
  st=0;///not state
  //printf("rr_c=%f and nClust=%d\n",rrClust_h[1],nClust);;
  //  nx=0;
 
  for (nc = 0; nc < nClust; nc ++) {
    flag=0;
    n1=clust[nc].head;;;///nc is a clust
    while(n1!=-1){
      VSub(diff,grain[n1].p,ObsS[4]);//center of box
      rr=VSQ(diff);
      auxR=sqrt(rr)*(1./deltaR);
      nrdf=(int)auxR;
      ++ histRdf[nrdf];
      ///okay!!
   
      n1=clust[n1].next;;
    };;
    //******************************
      
  }


  //cluster analize
  Vsize=0;;
  cBig=0;
  //****************************************
  for (nc = 0; nc < nClust; nc ++) {
    Vsize = clust[nc].size;
    if (Vsize > clust[cBig].size){
      cBig = nc;
    } 
    
  } 
  meansure[tt].CM = clust[cBig].size*(1./Mol);
  //up down calculation obs1
  Nmb1=Nmb2=0.;  
  ///cBig is largest cluste
  n1=clust[cBig].head;;;///nc is a clust
    while(n1!=-1){
      VSub(diff,grain[n1].p,ObsS[4]);//center of box
      Vatan(diff);
      psi.x=-sin(theta);;
      psi.y=cos(theta);;
      Dot=VDot(grain[n1].V,psi);
      if(Dot>0.){
	Nmb1+=1.;
      }else{
	Nmb2+=1.;
      }
      //rr=VSQ(diff);
      //auxR=sqrt(rr)*(1./deltaR);
      //nrdf=(int)auxR;
      //  ++ histRdf[nrdf];
      ///okay!!
   
      n1=clust[n1].next;;
    };;

    meansure[tt].Nmb1=Nmb1*(1./Mol);
    meansure[tt].Nmb2=Nmb2*(1./Mol);
  //meansure[tt].tax_obs1=nup-ndow;;
  //part 2
  
  
 ///

  // meansure[tt].tax_obs2=nup-ndow;;

 
}

//////new functions open
void Copy_Grains_Obs_cyc(real yb1,real yb2)
{
  int n,count;
  real x_final,x_initial;
  real y_final,y_initial;
  real aux_p;;
  x_initial=ObsS[0].x+ObsS[0].diam*0.25;;
  x_final=x_initial+a0+ObsS[0].diam*0.25;;
  ///*******************************
  aux_p=ObsS[0].diam*0.5+10.;
  y_initial=yb1;;
  y_final=yb2;;
    count=0;
    DO_MOL{
      //*******************************************************
      if((grain[n].p.x>x_initial)&&(grain[n].p.x<x_final)){
	if((grain[n].p.y>y_initial)&&(grain[n].p.y<y_final)){
	  grain_copy[count].r.x=grain[n].p.x;
	  grain_copy[count].r.y=grain[n].p.y;
	  grain_copy[count].v.x=grain[n].V.x;
	  grain_copy[count].v.y=grain[n].V.y;
	  grain_copy[count].n=n;
	  ++count;;
	}
      }
    
  }
    Mol_copy=count;

    //***************************
    int n1,n2;;
    vecreal diff;;
    real rr,r;
    real rrClust;;
    rrClust=rClust*rClust;;
    if(Nowcycles==504001){
      printf("para o cluster\n");;
      printf("rrC=%f\n",rrClust);;
    }
    
    for(n1=0;n1<Mol_copy;++n1){
      for(n2=n1+1;n2<Mol_copy;++n2){
	VSub(diff,grain_copy[n1].r,grain_copy[n2].r);;
	rr=VSQ(diff);;
	if (rr < rrClust) {
	  if(Nowcycles==504001){
	  printf("par n1=%d n2=%d\n",n1,n2);;
	  }
	  AddBondedPair_cyc (n1, n2);
	  //  if(Nowcycles==504001){
	  //  printf(" saiu dessa par n1=%d n2=%d\n",n1,n2);;
	  // }
	}
      }
    }


    if(Nowcycles==504001){
      printf("saindo dessa function cluster\n");;
      printf("rrC=%f\n",rrClust);;
    }
}






void AddBondedPair_cyc (int j1, int j2)
{

  // if(Nowcycles==504001){
  //	  printf("n12>> loop ?\n");;
  //	  }

  printf("%nClust>>%d\n",nClust);
  int cBig, cSmall, m, mp, nc1, nc2;
  nc1 = grain_copy[j1].inClust;
  nc2 = grain_copy[j2].inClust;
  //  if(Nowcycles==504001){
  // printf("nc1=%d nc2=%d > > loop ?\n",nc1,nc2);;
  // }
  if ((nc1 < 0) && (nc2 < 0)) {
    grain_copy[j1].inClust = nClust;
    grain_copy[j2].inClust = nClust;
    clust[nClust].size = 2;
    clust[nClust].head = j1;
    clust[j1].next = j2;
    clust[j2].next = -1;
    ++ nClust;
  } else if (grain_copy[j1].inClust < 0) {
    grain_copy[j1].inClust = nc2;
    clust[j1].next = clust[nc2].head;
    clust[nc2].head = j1;
    ++ clust[nc2].size;
  } else if (grain_copy[j2].inClust < 0) {
    grain_copy[j2].inClust = nc1;
    clust[j2].next = clust[nc1].head;
    clust[nc1].head = j2;
    ++ clust[nc1].size;
  } else {
    if (nc1 != nc2) {
      if(nc1>nc2){
	cBig=nc1;
      }else{
	cBig=nc2;
      }
      
      cSmall = nc1 + nc2 - cBig;
      for (m = clust[cSmall].head; m >= 0; m = clust[m].next) {
	grain_copy[m].inClust = cBig;
	mp = m;
	// if(Nowcycles==504001){
	//  printf("n1>> loop ?\n");;
	// }
      }
      clust[mp].next = clust[cBig].head;
      clust[cBig].head = clust[cSmall].head;
      clust[cBig].size += clust[cSmall].size;
      clust[cSmall].size = 0;
    }
  }
}

///
void InitClusters_cyc ()
{
  int n;
  DO_MOL {
    grain_copy[n].inClust = -1;
    clust[n].obs1=0;;
    clust[n].obs2=0;;
  }
  nClust = 0;
}
//**********************
void CompressClusters_cyc ()
{
  int j, m, nc;
  nc = 0;
  for (j = 0; j < nClust; j ++) {
    if (clust[j].size > 0) {
      clust[nc].head = clust[j].head;
      clust[nc].size = clust[j].size;
      for (m = clust[nc].head; m >= 0; m = clust[m].next)
	grain_copy[m].inClust = nc;
      ++ nc;
    }
  }
  nClust = nc;
}
////
void AnalClusterSize_cyc (real yb1, real yb2)
{

  real yI,yF;;
  int nc,n1,flag,st;
  real rrClust_h[2],rr,r,Dx,x1,x2,Dx2;;
  real y1, y2,aux,v1,v2;
  vecreal diff;
  int NCC;
  int cyc,aux_I;
  int n;

  printf("nClust=%d\n",nClust);
  cyc=(NstepT-Thecycle)/NMEAS;;
  x1=ObsS[0].x+ObsS[0].diam*0.5;
  x2=x1+a0;
  rrClust_h[0]=(ObsS[0].diam*0.5+0.5+0.01)*(ObsS[0].diam*0.5+0.5+0.01);;
  rrClust_h[1]=(ObsS[1].diam*0.5+0.5+0.01)*(ObsS[1].diam*0.5+0.5+0.01);;
  yI=ObsS[0].y-ObsS[0].diam*0.5;;
  yF=ObsS[0].y+ObsS[0].diam*0.5;;
  NCC=0;
  st=0;///not state
  for (nc = 0; nc < nClust; nc ++) {
    flag=0;
    n1=clust[nc].head;;;///nc is a clust
    while(n1!=-1){
      // if((grain[n1].p.y>yI)&&(grain[n1].p.y<yF)){
	//}
    
      VSub(diff, grain_copy[n1].r,ObsS[0]);
      rr=VSQ(diff);
      if(rr<=rrClust_h[0]){
	flag=1;;
	clust[nc].obs1=1;
	printf("mais para o obs1\n");
      }
      n1=clust[n1].next;;
    };;
    //******************************
    
    
    n1=clust[nc].head;;;///nc is a clust
    while(n1!=-1){
      // if((grain[n1].p.y>yI)&&(grain[n1].p.y<yF)){
	//}
      
      VSub(diff,grain_copy[n1].r,ObsS[1]);
      rr=VSQ(diff);
      if(rr<rrClust_h[1]){
	flag=1;;
	clust[nc].obs2=1;
	printf("mais para o obs2\n");
      }
      n1=clust[n1].next;;
    };;
    
    if((clust[nc].obs2==1)&&(clust[nc].obs1==1)){
      st=1;
      
      ++NCC;;
    }
  }
  //
  //there obs inetretractions
  x1=L*0.5-1;
  x2=L*0.5+1;
  y1=yb1;
  y2=yb2;
  if(st==1){
    N_interac+=1;
    //*********************
    aux=0.;
     v1=v2=0.;;
     //change
     for(n=0;n<Mol_copy;++n){
       if((grain_copy[n].r.x>x1)&&(grain_copy[n].r.x<x2)){
	 if((grain_copy[n].r.y>y1)&&(grain_copy[n].r.y<y2)){
	   v1+=grain_copy[n].v.y;
	   v2+=grain_copy[n].v.x;
	   aux+=1.;
	 }
       }
     }
     if(aux>0.){
       vxm+=v2*(1./aux);
       vym+=v1*(1./aux);
     }
    
  }else{
    N_nNinterac+=1;
  }  
  
  
  
  
  
}
///
void AnalClusterSize_cyc2(real yb1, real yb2)
{

  real yI,yF;;
  int nc,n1,flag,st;
  real rrClust_h[2],rr,r,Dx,x1,x2,Dx2;;
  real y1, y2,aux,v1,v2;
  vecreal diff;
  int NCC;
  int cyc,aux_I;
  int n,nx;
  real Dl;
  Dl=L*0.5;
  cyc=(NstepT-Thecycle)/NMEAS;;
  x1=ObsS[0].x+ObsS[0].diam*0.5;
  x2=x1+a0;
  rrClust_h[0]=(ObsS[0].diam*0.5+0.5+0.01)*(ObsS[0].diam*0.5+0.5+0.01);;
  rrClust_h[1]=(ObsS[1].diam*0.5+0.5+0.01)*(ObsS[1].diam*0.5+0.5+0.01);;
  yI=ObsS[0].y-ObsS[0].diam*0.5;;
  yF=ObsS[0].y+ObsS[0].diam*0.5;;
  NCC=0;
  st=0;///not state
  for (nc = 0; nc < nClust; nc ++) {
    flag=0;
    n1=clust[nc].head;;;///nc is a clust
    while(n1!=-1){
      // if((grain[n1].p.y>yI)&&(grain[n1].p.y<yF)){
	//}
     
      VSub(diff,grain_copy[n1].r,ObsS[0]);
      rr=VSQ(diff);
      if(rr<=rrClust_h[0]){
	flag=1;;
	clust[nc].obs1=1;
      }
      n1=clust[n1].next;;
    };;
    //******************************
    
    
    n1=clust[nc].head;;;///nc is a clust
    while(n1!=-1){
      // if((grain[n1].p.y>yI)&&(grain[n1].p.y<yF)){
	//}
      
      VSub(diff,grain_copy[n1].r,ObsS[1]);
      rr=VSQ(diff);
      if(rr<rrClust_h[1]){
	flag=1;;
	clust[nc].obs2=1;
      }
      n1=clust[n1].next;;
    };;
    
    if((clust[nc].obs2==1)&&(clust[nc].obs1==1)){
      st=1;
      
      ++NCC;;
    }
  }
  //
  //there obs inetretractions
  printf("NCC=%d\n",NCC);;
  x1=L*0.5-1;
  x2=L*0.5+1;
  y1=yb1;
  y2=yb2;
  if(st==1){
    N_interac2+=1;
    //*********************
    aux=0.;
     v1=v2=0.;;
     //change
      for(n=0;n<Mol_copy;++n){
       if((grain_copy[n].r.x>x1)&&(grain_copy[n].r.x<x2)){
	 if((grain_copy[n].r.y>y1)&&(grain_copy[n].r.y<y2)){
	   v1+=grain_copy[n].v.y;
	   v2+=grain_copy[n].v.x;
	   aux+=1.;
	 }
       }
     }
     if(aux>0.){
       vxm2+=v2*(1./aux);
       vym2+=v1*(1./aux);
     }
        
  }else{
    N_nNinterac2+=1;
  }  
  
  
  
  
  

}

void lazinessfunction(){
  //printe file in the end
  FILE *fp1;
  real r,Norma1,Norma2,a1,Step_R,fator;
  int i,cyc;
  int n;
  cyc=(NstepT-Thecycle)/NMEAS;;
  Norma1=Norma2=0.;;
  a1=NPR-1;
  Step_R=sqrt(2)*L*0.5*(1./a1);
  //norma
  for(i=0;i<NPR;++i){
    Norma1+=P_of_r[i].cw;
    Norma2+=P_of_r[i].acw;
  }
  fp1=fopen("NPR_prob.dat","w");
  for(i=0;i<NPR;++i){
    P_of_r[i].cw=P_of_r[i].cw*(1./Norma1);
    P_of_r[i].acw=P_of_r[i].acw*(1./Norma2);
    P_of_r[i].Ncw=P_of_r[i].Ncw*(1./GeralCount);
    P_of_r[i].Nacw=P_of_r[i].Nacw*(1./GeralCount);
    r=Step_R*0.5+Step_R*i;
    fator=P_of_r[i].Nw;
    if(fator==0){
      fator=1.;
    }
    P_of_r[i].w=P_of_r[i].w*(1./fator);
    fprintf(fp1,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",r,P_of_r[i].cw,P_of_r[i].acw,P_of_r[i].Ncw,P_of_r[i].Nacw,P_of_r[i].Nacw-P_of_r[i].Ncw,P_of_r[i].w);
  }
  fclose(fp1);
  //**************************************************************
  a1=1./Nessay;
  fp1=fopen("Wobs.dat","w");
  for(i=0;i<NMEAS;++i){
    r=(Thecycle+(i+1)*cyc)*stepT;
    meansure[i].essay_S.cw1=meansure[i].essay_S.cw1*a1;
    meansure[i].essay_S.cw2=meansure[i].essay_S.cw2*a1;
    meansure[i].essay_S.w3=meansure[i].essay_S.w3*a1;
    fprintf(fp1,"%lf\t%lf\t%lf\t%lf\n",r,meansure[i].essay_S.cw1,meansure[i].essay_S.cw2,meansure[i].essay_S.w3);
  }
  fclose(fp1);
  //****************************
  a1=1./Nessay;
  fp1=fopen("Super_Wobs.dat","w");
  for(i=0;i<NMEAS;++i){
    r=(Thecycle+(i+1)*cyc)*stepT;
    meansure[i].essay_S.SSw1=meansure[i].essay_S.SSw1*a1;
    meansure[i].essay_S.SSw2=meansure[i].essay_S.SSw2*a1;
    // meansure[i].essay_S.cw3=meansure[i].essay_S.cw3*a1;
    fprintf(fp1,"%lf\t%lf\t%lf\n",r,meansure[i].essay_S.SSw1,meansure[i].essay_S.SSw2);
  }
  fclose(fp1);
  //blocks
   a1=1./Nessay;
  fp1=fopen("Blocks.dat","w");
  for(n=0;n<NMEAS;++n){
    r=(Thecycle+(n+1)*cyc)*stepT;
    meansure[n].essay_S.f1= meansure[n].essay_S.f1*a1;
    meansure[n].essay_S.f2= meansure[n].essay_S.f2*a1;
    meansure[n].essay_S.b1= meansure[n].essay_S.b1*a1*0.25;
    meansure[n].essay_S.b2= meansure[n].essay_S.b2*a1*0.25;
    meansure[n].essay_S.a1= meansure[n].essay_S.a1*a1*0.25;
    meansure[n].essay_S.a2= meansure[n].essay_S.a2*a1*0.25;
    fprintf(fp1,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",r,meansure[n].essay_S.f1,meansure[n].essay_S.f2,meansure[n].essay_S.b1,meansure[n].essay_S.b2,meansure[n].essay_S.a1,meansure[n].essay_S.a2);
  }
  fclose(fp1);
}

void Zero_Mensure(){
  int n;
  for(n=0;n<NMEAS;++n){
    meansure[n].essay_S.SSw1=0.;
    meansure[n].essay_S.SSw2=0.;
    meansure[n].essay_S.cw3=0.;
    meansure[n].essay_S.cw1=0.;
    meansure[n].essay_S.cw2=0.;
    meansure[n].essay_S.f1=0.;
    meansure[n].essay_S.f2=0.;
    meansure[n].essay_S.b1=0.;
    meansure[n].essay_S.b2=0.;
    meansure[n].essay_S.a1=0.;
    meansure[n].essay_S.a2=0.;
    meansure[n].essay_S.w3=0.;
  }
}
