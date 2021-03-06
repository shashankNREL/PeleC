
// This file is automatically created by parse_pelec_params.py.  To update
// or add runtime parameters, please edit _cpp_parameters and then run
// mk_params.sh

int         PeleC::levmsk_interior = 0;
int         PeleC::levmsk_covered = 1;
int         PeleC::levmsk_notcovered = 2;
int         PeleC::levmsk_physbnd = 3;
int         PeleC::state_interp_order = 1;
int         PeleC::lin_limit_state_interp = 0;
int         PeleC::state_nghost = 0;
int         PeleC::do_reflux = 1;
int         PeleC::do_avg_down = 1;
int         PeleC::use_reactions_work_estimate = 0;
int         PeleC::load_balance_verbosity = 0;
amrex::Real PeleC::difmag = 0.1;
amrex::Real PeleC::small_dens = 1.e-200;
amrex::Real PeleC::small_temp = 1.e-200;
amrex::Real PeleC::small_pres = 1.e-200;
amrex::Real PeleC::small_ener = -1.e200;
int         PeleC::do_hydro = -1;
int         PeleC::do_mol_AD = 0;
int         PeleC::i_nscbc = 0;
int         PeleC::add_ext_src = 0;
int         PeleC::add_forcing_src = 0;
int         PeleC::hybrid_hydro = 0;
int         PeleC::ppm_type = 1;
int         PeleC::ppm_trace_sources = 1;
int         PeleC::ppm_temp_fix = 0;
int         PeleC::ppm_predict_gammae = 0;
int         PeleC::ppm_reference_eigenvectors = 0;
int         PeleC::plm_iorder = 2;
int         PeleC::hybrid_riemann = 0;
int         PeleC::use_colglaz = -1;
int         PeleC::riemann_solver = 0;
int         PeleC::cg_maxiter = 12;
amrex::Real PeleC::cg_tol = 1.0e-5;
int         PeleC::cg_blend = 2;
int         PeleC::use_flattening = 1;
int         PeleC::transverse_use_eos = 0;
int         PeleC::transverse_reset_density = 1;
int         PeleC::transverse_reset_rhoe = 0;
int         PeleC::dual_energy_update_E_from_e = 1;
amrex::Real PeleC::dual_energy_eta1 = 1.0e0;
amrex::Real PeleC::dual_energy_eta2 = 1.0e-4;
amrex::Real PeleC::dual_energy_eta3 = 1.0e0;
int         PeleC::use_pslope = 1;
int         PeleC::fix_mass_flux = 0;
int         PeleC::limit_fluxes_on_small_dens = 0;
int         PeleC::density_reset_method = 1;
int         PeleC::allow_negative_energy = 1;
int         PeleC::allow_small_energy = 1;
int         PeleC::update_state_between_sources = 0;
int         PeleC::source_term_predictor = 0;
int         PeleC::first_order_hydro = 0;
std::string PeleC::xl_ext_bc_type = "";
std::string PeleC::xr_ext_bc_type = "";
std::string PeleC::yl_ext_bc_type = "";
std::string PeleC::yr_ext_bc_type = "";
std::string PeleC::zl_ext_bc_type = "";
std::string PeleC::zr_ext_bc_type = "";
amrex::Real PeleC::eb_boundary_T = 1.0;
int         PeleC::eb_isothermal = 1;
int         PeleC::eb_noslip = 1;
int         PeleC::do_mms = 0;
std::string PeleC::masa_solution_name = "ad_cns_3d_les";
amrex::Real PeleC::fixed_dt = -1.0;
amrex::Real PeleC::initial_dt = -1.0;
amrex::Real PeleC::dt_cutoff = 0.0;
amrex::Real PeleC::max_dt = 1.e200;
amrex::Real PeleC::cfl = 0.8;
amrex::Real PeleC::init_shrink = 1.0;
amrex::Real PeleC::change_max = 1.1;
amrex::Real PeleC::retry_neg_dens_factor = 1.e-1;
int         PeleC::sdc_iters = 1;
int         PeleC::mol_iters = 1;
amrex::Real PeleC::dtnuc_e = 1.e200;
amrex::Real PeleC::dtnuc_X = 1.e200;
int         PeleC::dtnuc_mode = 1;
amrex::Real PeleC::dxnuc = 1.e200;
int         PeleC::do_react = 0;
amrex::Real PeleC::react_T_min = 0.0;
amrex::Real PeleC::react_T_max = 1.e200;
amrex::Real PeleC::react_rho_min = 0.0;
amrex::Real PeleC::react_rho_max = 1.e200;
int         PeleC::disable_shock_burning = 0;
int         PeleC::do_acc = -1;
int         PeleC::bndry_func_thread_safe = 1;
int         PeleC::do_special_tagging = 0;
#ifdef AMREX_DEBUG
int         PeleC::print_fortran_warnings = 1;
#else
int         PeleC::print_fortran_warnings = 0;
#endif
#ifdef AMREX_DEBUG
int         PeleC::print_energy_diagnostics = 1;
#else
int         PeleC::print_energy_diagnostics = 0;
#endif
int         PeleC::track_grid_losses = 0;
int         PeleC::sum_interval = -1;
amrex::Real PeleC::sum_per = -1.0e0;
int         PeleC::hard_cfl_limit = 1;
std::string PeleC::job_name = "";
std::string PeleC::flame_trac_name = "";
std::string PeleC::fuel_name = "";
